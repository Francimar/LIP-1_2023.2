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

    void farejar() {
        cout << "Cheirando..." << endl;
    }
};

int main() {
    Cachorro meuCachorro;
    Animal *ptrAnimal = &meuCachorro;

    // Downcasting
    Cachorro *ptrCachorro = dynamic_cast<Cachorro*>(ptrAnimal);
    if (ptrCachorro) {
        ptrCachorro->fazerSom();
        ptrCachorro->farejar();
    } else {
        cout << "Falha no downcasting." << endl;
    }

    return 0;
}



