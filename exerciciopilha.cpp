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

	/*Fun��o principal que inicializa a pilha p e apresenta repetidamente o
	menu com as op��es para escolha do usu�rio: */
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
		cout << "Escolha uma op��o:" << "\n" << endl;
		cout << "Digite 1 para Inserir" << endl;
		cout << "Digite 2 para Retirar" << endl;
		cout << "Digite 3 para Listar" << endl;
		cout << "Digite 4 para Sair" << "\n"<< endl;
		
		cout << "Digite a op��o escolhida: ";
		cin >> escolha;
		
		system("cls");
		
		return escolha;
		
	} while (escolha != 4);
		
}
	// Fun��o de neg�cio que inicializa a pilha p
	void inicializar();

	/* Fun��o de interface que solicita ao usu�rio o n�mero para ser empilhado em p atrav�s do uso da fun��o empilhar e informa se o
	empilhamento foi bem sucedido ou se a pilha estava cheia.*/
	void inserir();

	/* Fun��o de interface que aciona a fun��o desempilhar e apresenta ao
	usu�rio o n�mero desempilhado ou mensagem caso a pilha esteja vazia.*/
	void retirar();

	/* Fun��o de interface que aciona a fun��o desempilhar sucessivas vezes,
	mostrando o n�mero retirado, at� que a pilha fique vazia.*/
	void listar();

	/* Fun��o de neg�cio que insere um n�mero inteiro passado como par�metro
	no topo da pilha p e retorna 1 se o empilhamento foi bem sucedido ou 0
	se a pilha estiver cheia.*/
	int empilhar(int);

	/*Fun��o de neg�cio que retira o n�mero inteiro que est� do topo da
	pilha p e o retorna.*/
	int desempilhar();

