#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criando a estrutura da Fila
struct Fila {

// Declarando as variáveis
	int primeiraPosicao;
	int ultimaPosicao;
	int capacid;
	int numeroItens;
	float *dados; 

};

// Função que cria a fila
void criarFila( struct Fila *f, int c ) { 

	f->primeiraPosicao = 0;
	f->ultimaPosicao = -1;
	f->numeroItens = 0;
	f->capacid = c;
	f->dados = (float*) malloc (f->capacid * sizeof(float));

}

// Função que insere na fila
void inserir(struct Fila *f, int v) {

	if(f -> ultimaPosicao == f -> capacid -1 )
		f -> ultimaPosicao = -1;

	// Incremento
	f -> ultimaPosicao ++;
	f -> dados[f -> ultimaPosicao] = v; 
	f -> numeroItens++; 

}

// Função que remove da fila
int remover( struct Fila *f ) { 

	int re = f -> dados[f -> primeiraPosicao++]; // Incrementando o primeiro

	if(f -> primeiraPosicao == f -> capacid)
		f -> primeiraPosicao = 0;

	f -> numeroItens --;  // Retirando um item
	return re;

}

// Função que verifica se a fila está vazia, retornando true (verdadeiro)
int vazia( struct Fila *f ) { 

	return (f -> numeroItens==0);

}

// Função que verifica se a fila já está cheia, retornando true (verdadeiro)
int cheia( struct Fila *f ) { 

	return (f -> numeroItens == f -> capacid);
}

// Função que mostra a fila de acordo com a estrutura de repetição for
void mostrarFila(struct Fila *f){

	int contador, x;

	for ( contador = 0, x = f -> primeiraPosicao; contador < f -> numeroItens; contador ++){

		printf("%.2f\t",f->dados[x++]);

		if (x == f -> capacid)
			x = 0;

	}
	printf("\n");

}

// Função principal
int main () {

	setlocale(LC_ALL, "Portuguese");

// Declarando as variáveis
	int capacid;
	int opcao;
	float valor;
	struct Fila aFila;

// Solicitando ao usuário para digitar a capacidade da fila e criando-a
	printf("\nDigite a capacidade da fila: ");
	scanf("%d",&capacid);
	criarFila(&aFila, capacid);

// Laço de repetição (loop) - While para o menu
	while( 1 ){

		printf("\n------------------------\n");
		printf("\n1 - Inserir elemento");
		printf("\n2 - Remover elemento");
		printf("\n3 - Mostrar fila");
		printf("\n4 - Sair\n");
		printf("\nDigite a opção: ");
		scanf("%d", &opcao);
		printf("------------------------");

// Estrutura condicional (switch, case)
		switch(opcao){

			case 1: // Inserir
				if (cheia(&aFila)){

					printf("\nA fila já está cheia\n");

				}
				else {

					printf("\nDigite o valor para ser inserido? ");
					scanf("%f", &valor);
					inserir(&aFila,valor);

				}

				break;

			case 2: // Remover
				if (vazia(&aFila)){

					printf("\nA fila está vazia\n");

				}
				else {

					valor = remover(&aFila);
					printf("\n%1f Removido\n", valor) ; 

				}
				break;

				case 3: // Mostrar
					if (vazia(&aFila)){

						printf("\nA fila está vazia\n");

					}
					else {

						printf("\nFila: ");
						mostrarFila(&aFila);

					}
					break;

				case 4: // Sair
					printf("\nSaindo aqui, see you later ... ;) \n");
					exit(0);

				default:
					printf("\nOpção Inválida\n");
		}
	}
}
