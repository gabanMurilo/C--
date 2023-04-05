#include "iostream"

using namespace std;

class Carro
{
private:
    int ano;
    string modelo;
    string marca;

public:
    Carro(int a, string mod, string mar)
    {
        ano = a;
        modelo = mod;
        marca = mar;
    };
    void setAno(int a)
    {
        ano = a;
    };
    void setModelo(string mod)
    {
        modelo = mod;
    };
    void setMarca(string mar)
    {
        marca = mar;
    };
    void imprimirDados()
    {
        cout << "Ano: " << ano << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Marca: " << marca << endl;
    }
};

int main(){
    Carro meuCarro(1978, "Marea Turbo", "Fiat");
    meuCarro.imprimirDados();

    cout << "---------------------" << endl;

    meuCarro.setAno(2010);    
    meuCarro.setModelo("Uno");
    meuCarro.setMarca("Fiat");
    meuCarro.imprimirDados();
    
    return 0;
}