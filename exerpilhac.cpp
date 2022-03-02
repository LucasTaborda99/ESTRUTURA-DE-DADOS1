#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criando a struct da pilha
struct Pilha {
	
	// Declarando as variáveis
	int topo; // Topo
	int capacidade; // Capacidade
	float *pElemento; // Ponteiro para elemento
};

// Função que cria a pilha
void criarpilha( struct Pilha *p, int c ){

   p->topo = -1;
   p->capacidade = c;
   p->pElemento = (float*) malloc (c * sizeof(float));

}

// Função que verifica se a pilha esta vazia
int vazia ( struct Pilha *p ){

   if( p-> topo == -1 )

      return 1;   // true

   else

      return 0;   // false

}

// Função que verifica se a pilha esta cheia
int cheia ( struct Pilha *p ){

	if (p->topo == p->capacidade - 1)

		return 1;

	else

		return 0;

}

// Função que empilha
void empilhar ( struct Pilha *p, float v){

	p->topo++;
	p->pElemento [p->topo] = v;

}

// Função que desempilha
float desempilhar ( struct Pilha *p ){

   float aux = p->pElemento [p->topo];
   p->topo--;
   return aux;

}

// Função que mostra o topo
float mostratopo ( struct Pilha *p ){

   return p->pElemento [p->topo];

}

// Função principal
int main(){

	setlocale(LC_ALL, "Portuguese");

// Declarando as variáveis
	struct Pilha minhapilha;
	int capacidade, opcao;
	float valor;

	printf( "\nDigite a capacidade da pilha: " );
	scanf( "%d", &capacidade );

	criarpilha (&minhapilha, capacidade);

// Laço de repetição (loop) - While
	while( 1 ){ 
		
		printf("\n------------------------\n");
		printf("\n1- Empilhar\n");
		printf("2- Desempilhar\n");
		printf("3- Mostrar o topo\n");
		printf("4- Sair\n");
		printf("\nDigite a opção:  ");
		scanf("%d", &opcao);
		printf("\n------------------------");

// Estrutura condicional (switch, case)
		switch (opcao){

			case 1: // Empilhar

				if( cheia( &minhapilha ) == 1 )

					printf("\nA pilha já está cheia \n");

				else {

					printf("\nDigite o valor: ");
					scanf("%f", &valor);
					empilhar (&minhapilha, valor);

				}
				break;

			case 2: // Desemplihar
				if ( vazia(&minhapilha) == 1 )

					printf( "\nA pilha está vazia \n" );

				else{

					valor = desempilhar (&minhapilha);
					printf ( "\n%.1f Desempilhado\n", valor );

				}
				break;

			case 3: // Topo
				if ( vazia (&minhapilha) == 1 )

					printf( "\nA pilha está vazia\n" );

				else {

					valor = mostratopo (&minhapilha);
					printf ( "\nTopo: %.1f\n", valor );

				}
				break;

			case 4: // Sair
				exit(0);

			default: printf( "\nOpção Inválida \n" );
		}
	}
	
}
