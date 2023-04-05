#include "iostream"
#include "queue"

using namespace std;

int busca_fila (queue <int> fila, int elemento){
    int index = 0;
    while(!fila.empty()){
        if(fila.front() == elemento){
            return index;
        }
        fila.pop();
        index++;
    }
    return -1;
}

int main(){
    queue <int> fila;
    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5);
    fila.push(6);
    fila.push(7);
    fila.push(8);
    fila.push(9);
    fila.push(10);

    int valor;
    cout << "Digite um valor: ";
    cin >> valor;
    int index = busca_fila(fila, valor);
    if (index != -1){
        cout << "Elemento" <<index << "encontrado na posicao " << index << endl;
    }else{
        cout << "Elemento nao encontrado" << endl;
    }
    return 0;
}