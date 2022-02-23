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
//O mais importante já passou.
//Este código agora é só para testar.
int main(){
    PILHA s ;
    //criar a pilha
    iniciaPilha (s);
    //Verificar que a pilha está vazia
    if(pilhaVazia(s))
        cout<<"A pilha está vazia."<<endl;
    else
        cout<<"A pilha não está vazia."<<endl;
    //empilhar três elementos
    empilha(s,12);
    empilha(s,33);
    empilha(s,7);
    empilha(s,11);
    //Verificar que a pilha está cheia
    if(pilhaCheia(s))
        cout<<"A pilha está cheia."<<endl;
    else
        cout<<"A pilha não está cheia.\n"<<endl;
    //desempilhar e mostrar um elemento
    cout<<"Item desempilhado: "<<desempilha(s)<<endl;
    //terminar
 
    return 0;
}
