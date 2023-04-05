#include "iostream"

using namespace std;

class ContaBancaria {
    private:
        float saldo;
    public:
        ContaBancaria(float saldo);
        void depositar(float valor);
        void sacar(float valor);
        void imprimir();
};

ContaBancaria::ContaBancaria(float saldo) {
    this->saldo = saldo;
}

void ContaBancaria::depositar(float valor) {
    cout << "Depositar" << endl;
    scanf("%f", &valor);
    this->saldo += valor;
}

void ContaBancaria::sacar(float valor) {
    cout << "Sacar" << endl;
    scanf("%f", &valor);
    this->saldo -= valor;
}

void ContaBancaria::imprimir() {
    cout << "Saldo: " << this->saldo << endl;
}

int main() {
    cout << "Conta Bancaria" << endl;
    ContaBancaria conta(1000);
    conta.depositar(100);
    conta.sacar(50);
    conta.imprimir();
    return 0;
}

