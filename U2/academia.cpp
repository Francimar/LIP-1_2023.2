
/*

Questão 3
Você foi designado a implementar um programa em C++ para ajudar uma academia a gerenciar informações
sobre seus alunos. Cada aluno é representado por seu nome, altura e peso. Além disso, o programa deve calcular
o Índice de Massa Corporal (IMC) de cada aluno.
O programa deve ser capaz de ler as informações dos alunos de um arquivo de entrada chamado "entrada.txt" e
gravar as informações processadas em um arquivo de saída chamado "saida.txt".


O programa deve fazer o seguinte:
Ler as informações de cada aluno no arquivo de entrada.
Calcular o IMC de cada aluno com base em sua altura e peso usando a seguinte fórmula: IMC = Peso / (Altura *
Altura).
Classificar os alunos com base em seus IMCs (do maior para o menor).
Escrever as informações dos alunos ordenados no arquivo de saída.
Cada linha do arquivo de saída deve conter a matrícula, o nome do aluno, sua altura, seu peso e seu IMC.

*/







#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

struct Aluno_academia {
    string matricula;
    string nome;
    float altura;
    float peso;
    float imc;    
};


float calcular_IMC(float altura, float peso) {
    if (altura <= 0.0 || peso <= 0.0) {
        return 0.0; // Trate valores inválidos
    }
    return peso / (altura * altura);
}

void exibir_relatorio (Aluno_academia* alunos, int tam){

    for (int cont = 0; cont < tam; ++cont)
    {
        cout << endl << "DADOS DOS ALUNOS" << endl;
        cout << alunos[cont].nome << endl;
        cout << alunos[cont].altura << endl;
        cout << alunos[cont].peso << endl;
        cout << alunos[cont].imc << endl;

        
    }
}

bool comparar_IMC(const Aluno_academia& aluno1, const Aluno_academia& aluno2) {
    return aluno1.imc > aluno2.imc;
}

void ordena_imc(Aluno_academia* alunos, int num){
    sort(alunos, alunos + num, comparar_IMC);
}

void relatorio_saida(ofstream& file_out, Aluno_academia* alunos, int tam){

    for (int cont = 0; cont < tam; ++cont){
    
        file_out << alunos[cont].matricula << " " << alunos[cont].nome << " " << alunos[cont].altura << 
                    " " << alunos[cont].peso << " " << alunos[cont].imc << endl;
        
    }

}

void preparando_entrada(ifstream& file_in, Aluno_academia* alunos ){

    Aluno_academia aluno;
    string linha;
    int cont = 0;

    while(getline(file_in, linha)){        

        istringstream lin(linha);        

        if(lin >> aluno.matricula >> aluno.nome >> aluno.altura >> aluno.peso){
            aluno.imc = calcular_IMC(aluno.altura, aluno.peso);
            alunos[cont] = aluno;
        }else{
            cout << "ERRO AO LER A LINHA: " << linha << endl; 
        }        

        cont += 1; 
    }
}


int main() {
    ifstream arquivo_entrada("Entrada.txt");
    ofstream arquivo_saida("saida.txt");
    int num_alunos;        

    if (!arquivo_entrada.is_open() || !arquivo_saida.is_open()) {
        cerr << "Erro ao abrir os arquivos." << std::endl;
        return 1;
    }
    
    cin >> num_alunos;
    
    Aluno_academia* alunos = new Aluno_academia[num_alunos];
    
    preparando_entrada(arquivo_entrada, alunos);   
    ordena_imc(alunos, num_alunos);
    exibir_relatorio(alunos, num_alunos);
    relatorio_saida(arquivo_saida, alunos, num_alunos);
    
    delete[] alunos;
    arquivo_entrada.close();
    arquivo_saida.close();

    return 0;
}
