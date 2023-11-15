#include <iostream>

class Contador {
public:
    
    static int total;
    Contador() {
        total++;
    }
    
    ~Contador() {
        total--;
    }
};


int Contador::total = 0;

int main() {
    
    Contador obj1;
    Contador obj2;
    std::cout << "Total de instâncias: " << Contador::total << std::endl;

    Contador obj3;
    Contador obj4;
    std::cout << "Total de instâncias agora: " << Contador::total << std::endl;

    return 0;
}

