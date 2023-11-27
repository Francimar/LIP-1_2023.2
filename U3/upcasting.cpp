#include <iostream>

using namespace std;

class Animal {
public:
    virtual void fazerSom() {
        cout << "Som genérico de animal" << endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        cout << "Latindo..." << endl;
    }
};

int main() {
    Cachorro meuCachorro;
    Animal *ptrAnimal = &meuCachorro; // Upcasting
    ptrAnimal->fazerSom(); // Chama a versão de fazerSom() de Cachorro
    return 0;
}


