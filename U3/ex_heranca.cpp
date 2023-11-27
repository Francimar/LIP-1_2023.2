#include <iostream>
#include <string>

using namespace std; 

class Pessoa {
    protected:
        std::string nome;
        int idade;
    
    public:
        Pessoa(string _nome, int _idade){
            nome = _nome;
            idade = _idade;
        }
    
        void apresentar() const {
            cout << "Pessoa -> Meu nome é " << nome << " e tenho " 
            << idade << " anos." << endl;
        }
};

class Aluno : public Pessoa {
    
    private:
        int matricula;
    
    public:
        Aluno(const string _nome, int _idade, int _matricula)
            :Pessoa(_nome, _idade), matricula(_matricula) {}
            
    
        void estudar() const {
            cout << nome << " está estudando." << endl;
        }   
};

class Professor : public Pessoa {
    private:
        std::string disciplina;
    
    public:
        Professor(const std::string& _nome, int _idade, const std::string& _disciplina)
            : Pessoa(_nome, _idade), disciplina(_disciplina) {}
    
        void ensinar() const {
            std::cout << nome << " está ensinando " << disciplina << "." << std::endl;
        }
};

int main() {
    Aluno aluno("João", 20, 12345);
    Professor professor("Dr. Silva", 40, "Matemática");

    aluno.apresentar();    // Métodos de Pessoa
    aluno.estudar();        // Método de Aluno

    std::cout << std::endl;

    professor.apresentar(); // Métodos de Pessoa
    professor.ensinar();    // Método de Professor

    return 0;
}

