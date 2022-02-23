#include <iostream>
#include <locale.h>
#define TAMANHO 5
	
using namespace std;
	
struct pilha {
	int topo;
	int capacidade;
	int item [TAMANHO];
}; 
struct pilha p;

/*
	int e[MAX];
	struct pilha p;
*/

/*
	// Ponteiro para topo (fim) de vetor
	int *Topo;
	
	// Ponteiro para base (início) de vetor
	int *Base;
	
	// Ponteiro para navegar sobre o vetor pilha via aritmética de ponteiros
	int *Pont;

	// Vetor para pilha (primeiro número a entrar é ultimo a sair)
	int Pilha[TAMANHO];
*/

	// Assinatura da função inicializar
	int inicializar(pilha &p);
	
	// Assinatura da função inserir
	void inserir();
	
	// Assinatura da função retirar
	void retirar();
	
	// Assinatura da função listar
	void listar();
	
	// Assinatura da função empilhar
	int empilhar();
	
	// Assinatura da função desempilhar
	int desempilhar();
	
	
	/* Função principal que inicializa a pilha p e apresenta repetidamente o
	menu com as opções para escolha do usuário: */
	int main(){

	setlocale(LC_ALL, "Portuguese");
	
	struct PilhaMinhapilha;
	int capacidade;
	float valor;
	int escolha = 0;

	cout << "--- Programa Pilha ---" << "\n" << endl;
	cout << "Digite a capacidade da pilha: ";
	cin >> capacidade;

	//criarpilha (&minhapilha, capacidade);

	do {
		cout << "\n" << "--- Programa Pilha ---" << "\n" << endl;
		cout << "Escolha uma opção:" << "\n" << endl;
		cout << "Digite 1 para Inserir" << endl;
		cout << "Digite 2 para Retirar" << endl;
		cout << "Digite 3 para Listar" << endl;
		cout << "Digite 4 para Sair" << "\n"<< endl;
		
		cout << "Digite a opção escolhida: ";
		cin >> escolha;
		
		switch (escolha) {
	   		case 1:
				inserir();
			break;
			
			case 2:
				retirar();
				break;
				
			case 3:
				listar();
				break;

	   		case 4:
	   			cout << "\nAplicação encerrada\n";
				break;
				
	   		default:
	   			cout << "\nOpção inválida, tente novamente" << endl;
	   			continue;
	   }
		
		return escolha;
		
	} while (escolha != 4);

}
	// Função de negócio que inicializa a pilha p
	int inicializar(pilha &p){
		p.topo = -1;
	}
	
	/* Função de interface que solicita ao usuário o número para ser empilhado em p através do uso da função empilhar e informa se o
	empilhamento foi bem sucedido ou se a pilha estava cheia.*/
	void inserir(){
		
		cout << "\nInforme o número para ser empilhado: ";
		cin >> p.topo;

	}
	
	
	/* Função de interface que aciona a função desempilhar e apresenta ao
	usuário o número desempilhado ou mensagem caso a pilha esteja vazia.*/
	void retirar(){
		
	}
	
	
	/* Função de interface que aciona a função desempilhar sucessivas vezes,
	mostrando o número retirado, até que a pilha fique vazia.*/
	void listar(){
		
	}
	
	
	/* Função de negócio que insere um número inteiro passado como parâmetro
	no topo da pilha p e retorna 1 se o empilhamento foi bem sucedido ou 0
	se a pilha estiver cheia.*/
	int empilhar(int i){
	/*
		if(Pont == Topo){
			cout << "Pilha cheia\n";
			exit;
		} else {
			*Pont = i;
		}
	*/
	}
	
	
	/*Função de negócio que retira o número inteiro que está do topo da
	pilha p e o retorna.*/
	int desempilhar(){
		
	}
	
	
