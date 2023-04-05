#include "iostream"

struct No {
    int valor;
    No *prox;
};

int main (){
    No* n1 = new No;
    No* n2 = new No;
    No* n3 = new No;

    n1->valor = 1;
    n2->valor = 2;
    n3->valor = 3;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = n1;

    No*atual = n1;
    do {
        std::cout << atual->valor << std::endl;
        atual = atual->prox;
    } while (atual != n1);

    return 0;
}