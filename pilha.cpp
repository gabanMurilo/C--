#include "iostream"
#include "stack"

using namespace std;

bool busca_pilha (stack <int> pilha, int elemento){
    while(!pilha.empty()){
        if(pilha.top() == elemento){
            return true;
        }
        pilha.pop();
    }
    return false;
}

int main(){
    stack <int> pilha;
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    pilha.push(5);
    pilha.push(6);
    pilha.push(7);
    pilha.push(8);
    pilha.push(9);
    pilha.push(10);
    if (busca_pilha(pilha, 5)){
        cout << "Elemento encontrado" << endl;
    }else{
        cout << "Elemento nao encontrado" << endl;
    }
    if (busca_pilha(pilha, 11)){
        cout << "Elemento encontrado" << endl;
    }else{
        cout << "Elemento nao encontrado" << endl;
    }
    return 0;
}