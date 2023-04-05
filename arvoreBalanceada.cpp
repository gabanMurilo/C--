#include <iostream>

using namespace std;

struct no{
    int chave;
    no *esq;
    no *dir;
};

no *raiz;

void inicializa(){
    raiz = NULL;
}

void insere(int chave){
    no *novo = new no;
    novo->chave = chave;
    novo->esq = NULL;
    novo->dir = NULL;
    if(raiz == NULL){
        raiz = novo;
    }else{
        no *atual = raiz;
        no *ant = NULL;
        while(atual != NULL){
            ant = atual;
            if(chave <= atual->chave){
                atual = atual->esq;
            }else{
                atual = atual->dir;
            }
        }
        if(chave <= ant->chave){
            ant->esq = novo;
        }else{
            ant->dir = novo;
        }
    }
}

void emOrdem(no *atual){
    if(atual != NULL){
        emOrdem(atual->esq);
        cout << atual->chave << " ";
        emOrdem(atual->dir);
    }
}



int main(){
    inicializa();
    insere(10);
    insere(5);
    insere(15);
    insere(3);
    insere(7);
    insere(12);
    insere(17);
    insere(1);
    insere(4);
    insere(6);
    insere(8);
    insere(11);
    insere(13);
    insere(16);
    insere(18);
    emOrdem(raiz);
    return 0;
}
