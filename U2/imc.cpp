#include <iostream>
using namespace std;

struct Aluno {
    double altura;
    double peso;
    string nome;
};

double calcular_IMC(Aluno aluno) {
    // A fórmula do IMC é peso (kg) / (altura (m) * altura (m))
    return aluno.peso / (aluno.altura * aluno.altura);
}

int main() {
    int num_Alunos;
    cout << "Quantos alunos deseja registrar? ";
    cin >> num_Alunos;

    // Aloca dinamicamente um array de estruturas Aluno
    Aluno* alunos = new Aluno[num_Alunos];

    for (int i = 0; i < num_Alunos; i++) {
        cout << "Nome do Aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Altura (em metros): ";
        cin >> alunos[i].altura;
        cout << "Peso (em quilogramas): ";
        cin >> alunos[i].peso;
    }

    cout << "\nRelatório do IMC dos alunos:\n";
    for (int i = 0; i < num_Alunos; i++) {
        double imc = calcular_IMC(alunos[i]);
        cout << "Aluno:  " << alunos[i].nome << " - IMC: " << imc << endl;
    }

    // Libera a memória alocada dinamicamente
    delete[] alunos;

    return 0;
}
