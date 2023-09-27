#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort

int main() {

    std::vector<int> vetor = {5, 2, 9, 1, 5, 6};

    ordenar o vetor em ordem crescente
    std::sort(vetor.begin(), vetor.end());

    // Imprimindo o vetor ordenado
    for (int elemento : vetor) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
