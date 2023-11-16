#include <iostream>
#include <cstring>

class MinhaString {
public:
    char* str;

    // Construtor
    MinhaString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destrutor
    ~MinhaString() {
        delete[] str;
    }
};

int main() {
    MinhaString original("Hello");

    // Construtor de cópia padrão é chamado aqui
    MinhaString copia = original;

    std::cout << "Original: " << original.str << std::endl;
    std::cout << "Cópia: " << copia.str << std::endl;

    // Modificando a cópia
    copia.str[0] = 'X';

    std::cout << "Original: " << original.str << std::endl;
    std::cout << "Cópia: " << copia.str << std::endl;

    return 0;
}

