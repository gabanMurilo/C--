#include "iostream"
#include "string"

using namespace std;

class Conta{
    protected:
        string titular;
        float saldo;

    public:
        Conta (string nome, double saldoInicial){
            titular = nome;
            saldo = saldoInicial;
        };
        virtual void sacar(float valor){
            saldo -= valor;
        };
        virtual void depositar(float valor){
            saldo += valor;
        };
        virtual void imprimirExtrato(){
            cout << "Titular: " << titular << endl;
            cout << "Saldo: " << saldo << endl;
        };
};

class ContaCorrente : public Conta{
    public:
        ContaCorrente(string nome, double saldoInicial) : Conta(nome, saldoInicial){};
        void sacar(float valor){
            saldo -= valor + 0.10;
        };
        void depositar(float valor){
            saldo += valor * 0.10;
        };
};

class ContaPoupanca : public Conta{
    public:
        ContaPoupanca(string nome, double saldoInicial) : Conta(nome, saldoInicial){};
        void sacar(float valor){
            saldo -= valor + 0.05;
        };
        void depositar(float valor){
            saldo += valor * 0.05;
        };
};

int main(){
    ContaCorrente contaCorrente("Joao", 1000);
    ContaPoupanca contaPoupanca("Maria", 1000);
    contaCorrente.imprimirExtrato();
    contaCorrente.sacar(100);
    contaPoupanca.imprimirExtrato();
    contaPoupanca.sacar(100);
    contaCorrente.imprimirExtrato();
    contaPoupanca.imprimirExtrato();
    contaCorrente.depositar(100);
    contaPoupanca.depositar(100);
    contaCorrente.imprimirExtrato();
    contaPoupanca.imprimirExtrato();
    return 0;
}