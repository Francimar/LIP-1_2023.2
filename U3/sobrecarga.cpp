#include <iostream>

class Tempo {
public:
    int horas;
    int minutos;
    int segundos;

    // Construtor para inicializar o objeto Tempo
    Tempo(int h, int m, int s){
      horas = h;
      minutos = m;
      segundos = s ; 
    } 

    // Sobrecarga do operador de adição
    Tempo operator+(const Tempo& outro) const {
        Tempo resultado(0, 0, 0);

        // Somando horas, minutos e segundos
        resultado.segundos = segundos + outro.segundos;
        resultado.minutos = minutos + outro.minutos + resultado.segundos / 60;
        resultado.segundos %= 60;
        resultado.horas = horas + outro.horas + resultado.minutos / 60;
        resultado.minutos %= 60;

        return resultado;
    }

    // Função para exibir o tempo
    void exibirTempo() const {
        std::cout << horas << "h " << minutos << "m " << segundos << "s" << std::endl;
    }
};

int main() {
    Tempo tempo1(2, 30, 45);
    Tempo tempo2(1, 15, 20);

    // Usando o operador de adição sobrecarregado
    Tempo resultado = tempo1 + tempo2;

    std::cout << "Tempo 1: ";
    tempo1.exibirTempo();
    std::cout << "Tempo 2: ";
    tempo2.exibirTempo();
    std::cout << "Resultado: ";
    resultado.exibirTempo();

    return 0;
}

