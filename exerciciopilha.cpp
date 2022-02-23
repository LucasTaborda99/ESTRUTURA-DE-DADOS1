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
	
	// Ponteiro para base (in�cio) de vetor
	int *Base;
	
	// Ponteiro para navegar sobre o vetor pilha via aritm�tica de ponteiros
	int *Pont;

	// Vetor para pilha (primeiro n�mero a entrar � ultimo a sair)
	int Pilha[TAMANHO];
*/

	// Assinatura da fun��o inicializar
	int inicializar(pilha &p);
	
	// Assinatura da fun��o inserir
	void inserir();
	
	// Assinatura da fun��o retirar
	void retirar();
	
	// Assinatura da fun��o listar
	void listar();
	
	// Assinatura da fun��o empilhar
	int empilhar();
	
	// Assinatura da fun��o desempilhar
	int desempilhar();
	
	
	/* Fun��o principal que inicializa a pilha p e apresenta repetidamente o
	menu com as op��es para escolha do usu�rio: */
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
		cout << "Escolha uma op��o:" << "\n" << endl;
		cout << "Digite 1 para Inserir" << endl;
		cout << "Digite 2 para Retirar" << endl;
		cout << "Digite 3 para Listar" << endl;
		cout << "Digite 4 para Sair" << "\n"<< endl;
		
		cout << "Digite a op��o escolhida: ";
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
	   			cout << "\nAplica��o encerrada\n";
				break;
				
	   		default:
	   			cout << "\nOp��o inv�lida, tente novamente" << endl;
	   			continue;
	   }
		
		return escolha;
		
	} while (escolha != 4);

}
	// Fun��o de neg�cio que inicializa a pilha p
	int inicializar(pilha &p){
		p.topo = -1;
	}
	
	/* Fun��o de interface que solicita ao usu�rio o n�mero para ser empilhado em p atrav�s do uso da fun��o empilhar e informa se o
	empilhamento foi bem sucedido ou se a pilha estava cheia.*/
	void inserir(){
		
		cout << "\nInforme o n�mero para ser empilhado: ";
		cin >> p.topo;

	}
	
	
	/* Fun��o de interface que aciona a fun��o desempilhar e apresenta ao
	usu�rio o n�mero desempilhado ou mensagem caso a pilha esteja vazia.*/
	void retirar(){
		
	}
	
	
	/* Fun��o de interface que aciona a fun��o desempilhar sucessivas vezes,
	mostrando o n�mero retirado, at� que a pilha fique vazia.*/
	void listar(){
		
	}
	
	
	/* Fun��o de neg�cio que insere um n�mero inteiro passado como par�metro
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
	
	
	/*Fun��o de neg�cio que retira o n�mero inteiro que est� do topo da
	pilha p e o retorna.*/
	int desempilhar(){
		
	}
	
	
