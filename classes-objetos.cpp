#include "iostream"

class Pessoa
{
public:
    Pessoa(std ::string nome, int idade)
    {

        nome_ = nome;
        idade_ = idade;
    }

    void saudacao()
    {
        std ::cout << "Olá, meu nome é " << nome_ << " e tenho " << idade_ << " anos." << std ::endl;
    }
    void aniversairo()
    {
        idade_++;
        std ::cout << "Parabéns, agora você tem " << idade_ << " anos." << std ::endl;
    }

private:
    std ::string nome_;
    int idade_;
};

int main(){
    Pessoa pessoa1("João", 20);
    pessoa1.saudacao();
    pessoa1.aniversairo();

    Pessoa pessoa2("Maria", 18);
    pessoa2.saudacao();
    pessoa2.aniversairo();
    
    return 0;
}
