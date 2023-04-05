#include "iostream"

using namespace std;

class Animal{
    public :
        virtual void fazerSom() = 0;
};

class Cachorro : public Animal{
    public :
        void fazerSom()override{
            cout << "Au Au" << endl;
        }
};

class Gato : public Animal{
    public :
        void fazerSom()override{
            cout << "Miau" << endl;
        }
};

int main(){
    Animal *animal;
    Cachorro cachorro;
    Gato gato;
    animal = &cachorro;
    animal->fazerSom();
    animal = &gato;
    animal->fazerSom();
    return 0;
}