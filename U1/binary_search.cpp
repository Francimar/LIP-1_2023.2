#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>

using namespace std;

// Função de busca binária recursiva
int busca_binaria(int lista[], int elemento, int esquerda, int direita) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Se o elemento do meio for igual ao elemento procurado, retorna a posição
        if (lista[meio] == elemento) {
            return meio;
        }

        // Se o elemento do meio for maior que o elemento procurado, busca na metade esquerda
        if (lista[meio] > elemento) {
            return busca_binaria(lista, elemento, esquerda, meio - 1);
        }

        // Caso contrário, busca na metade direita
        return busca_binaria(lista, elemento, meio + 1, direita);
    }

    // Elemento não encontrado, retorna -1
    return -1;
}

int busca_sequencial (int lista[], int elemento, int tam){
    for(int x = 0; x <= tam; x++){
        if(lista[x] == elemento){
            return x;
        }
    }
    return -1; 
}

void exibe_vetor(int lista[], int tam){
    for(int i = 0; i < tam; i++){
        cout << lista[i] << endl;
    }
}

void preenche_vetor(int lista[], int tam){
    for(int i = 0; i < tam; i++){
        lista[i] = i+1;
    }
}

int elemento_pesquisa(int tam){

    srand(static_cast<unsigned int>(time(nullptr)));
    return rand() % tam*2+1;

}

int main() {

    int lista = {};
    int elemento, resultado;
    double tempo;
    double somatempo;

    for(int i = 10; i <= 10000; i+=100){
        int lista[i];

        preenche_vetor(lista, i);
        //exibe_vetor(lista, i);

        somatempo = 0.0;

        for(int x = 0; x<10000; x++){
            elemento = elemento_pesquisa(i);

            clock_t start = clock();
            resultado = busca_binaria(lista, elemento, 0, i - 1);
            //resultado = busca_sequencial(lista, elemento, i);
            clock_t end = clock();
            tempo = static_cast<double>(end - start) / CLOCKS_PER_SEC;
            somatempo += tempo;
        }

        cout << i << " " << somatempo/10000 << endl; 
    }


    return 0;
}
