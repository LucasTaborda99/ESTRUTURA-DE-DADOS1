#include <iostream>
#define tamanho 5
using namespace std;
typedef struct{
      int topo ;
      int item [tamanho] ;
}PILHA;
void iniciaPilha (PILHA &p) {
     p.topo = -1 ;
}
bool pilhaVazia(PILHA p){
    if(p.topo == -1 )
        return true;
    else
        return false;
}
bool pilhaCheia(PILHA p){
    if (p.topo == tamanho-1)
        return true;
    else
        return false;
}
void empilha(PILHA &p, int x){
    p.item[++p.topo]=x;
}
int desempilha(PILHA &p){
    return (p.item[p.topo--]) ;
}
//O mais importante j� passou.
//Este c�digo agora � s� para testar.
int main(){
    PILHA s ;
    //criar a pilha
    iniciaPilha (s);
    //Verificar que a pilha est� vazia
    if(pilhaVazia(s))
        cout<<"A pilha est� vazia."<<endl;
    else
        cout<<"A pilha n�o est� vazia."<<endl;
    //empilhar tr�s elementos
    empilha(s,12);
    empilha(s,33);
    empilha(s,7);
    empilha(s,11);
    //Verificar que a pilha est� cheia
    if(pilhaCheia(s))
        cout<<"A pilha est� cheia."<<endl;
    else
        cout<<"A pilha n�o est� cheia.\n"<<endl;
    //desempilhar e mostrar um elemento
    cout<<"Item desempilhado: "<<desempilha(s)<<endl;
    //terminar
 
    return 0;
}
