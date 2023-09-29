#include <iostream>
#include <chrono>

int main() {
    // Captura o tempo de início
    auto start = std::chrono::high_resolution_clock::now();

    // Execute o código cujo tempo você deseja medir aqui

    // Captura o tempo de término
    auto end = std::chrono::high_resolution_clock::now();

    // Calcule a diferença de tempo
    std::chrono::duration<double> duration = end - start;

    // Converta a diferença de tempo para segundos
    double tempoEmSegundos = duration.count();

    std::cout << "Tempo decorrido: " << tempoEmSegundos << " segundos." << std::endl;

    return 0;
}

