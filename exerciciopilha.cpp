	#include <iostream>
	#include <locale.h>
	
	using namespace std;
	
	
struct Pilha {
	int topo;
	int capacidade;
	float *pElem;
};
	/*
	int e[MAX];
	struct pilha p;
*/

	/*Função principal que inicializa a pilha p e apresenta repetidamente o
	menu com as opções para escolha do usuário: */
	int main(){

	setlocale(LC_ALL, "Portuguese");
	
	struct Pilha minhapilha;
	int capacidade;
	float valor;
	int escolha = 0;

	cout << "--- Programa Pilha ---" << "\n" << endl;
	cout << "Digite a capacidade da pilha : ";
	cin >> capacidade;

	criarpilha (&minhapilha, capacidade);

	do {
		cout << "\n" << "--- Programa Pilha ---" << "\n" << endl;
		cout << "Escolha uma opção:" << "\n" << endl;
		cout << "Digite 1 para Inserir" << endl;
		cout << "Digite 2 para Retirar" << endl;
		cout << "Digite 3 para Listar" << endl;
		cout << "Digite 4 para Sair" << "\n"<< endl;
		
		cout << "Digite a opção escolhida: ";
		cin >> escolha;
		
		system("cls");
		
		return escolha;
		
	} while (escolha != 4);
		
}
	// Função de negócio que inicializa a pilha p
	void inicializar();

	/* Função de interface que solicita ao usuário o número para ser empilhado em p através do uso da função empilhar e informa se o
	empilhamento foi bem sucedido ou se a pilha estava cheia.*/
	void inserir();

	/* Função de interface que aciona a função desempilhar e apresenta ao
	usuário o número desempilhado ou mensagem caso a pilha esteja vazia.*/
	void retirar();

	/* Função de interface que aciona a função desempilhar sucessivas vezes,
	mostrando o número retirado, até que a pilha fique vazia.*/
	void listar();

	/* Função de negócio que insere um número inteiro passado como parâmetro
	no topo da pilha p e retorna 1 se o empilhamento foi bem sucedido ou 0
	se a pilha estiver cheia.*/
	int empilhar(int);

	/*Função de negócio que retira o número inteiro que está do topo da
	pilha p e o retorna.*/
	int desempilhar();

