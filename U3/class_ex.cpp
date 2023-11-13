#include <iostream>
#include <string>

class Pessoa {
private:
    std::string nome;
    int idade;

public:
    // Construtor
    Pessoa(std::string n, int i) : nome(n), idade(i) {}

    // Método para obter o nome
    std::string get_nome() const {
        return nome;
    }

    // Método para obter a idade
    int get_idade() const {
        return idade;
    }

    // Método para definir a idade
    void set_idade(int nova_idade) {
        idade = nova_idade;
    }

    // Método para imprimir informações sobre a pessoa
    void imprimir_info() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade << " anos" << std::endl;
    }
};

int main() {
    // Criando uma instância da classe Pessoa
    Pessoa pessoa1("João", 25);

    // Usando os métodos da classe
    pessoa1.imprimir_info();
    std::cout << "Nova Idade: " << pessoa1.get_idade() << std::endl;

    // Modificando a idade
    pessoa1.set_idade(30);

    // Imprimindo informações atualizadas
    pessoa1.imprimir_info();

    return 0;
}

