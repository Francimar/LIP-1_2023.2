/*
Crie um programa em C++ que permita ao usuário definir o tamanho de um vetor dinamicamente. O
programa deve solicitar ao usuário o número de elementos a serem armazenados, alocar memória
dinamicamente para o vetor e, em seguida, permitir que o usuário insira valores no vetor. Por fim, o
programa deve imprimir os valores armazenados no vetor.
*/




#include <iostream>

int main() {
    int tamanho;
    
    // Solicita ao usuário o número de elementos a serem armazenados
    std::cout << "Digite o número de elementos do vetor: ";
    std::cin >> tamanho;

    // Aloca memória dinamicamente para o vetor
    int* vetor = new int[tamanho];

    // Solicita ao usuário para inserir valores no vetor
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o valor para a posição " << i << ": ";
        std::cin >> vetor[i];
    }

    // Imprime os valores armazenados no vetor
    std::cout << "Valores armazenados no vetor: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    // Libera a memória alocada dinamicamente
    delete[] vetor;

    return 0;
}
