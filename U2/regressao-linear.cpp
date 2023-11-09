#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

    vector<int> size_of_vector;
    vector<double> execution_time;
    

    ifstream arquivo("data.txt");

    if(arquivo.is_open()){
        
        string linha;

        while(getline(arquivo, linha)){

            string linha_p1, linha_p2;

            if (arquivo >> linha_p1 >> linha_p2) {
                
                size_of_vector.push_back(stoi(linha_p1));
                execution_time.push_back(stof(linha_p2));
            }

        }

    }


    // Dados: tamanho do vetor e tempo de execução
    

    // Realiza a regressão linear
    int n = size_of_vector.size();
    
    double sum_x = 0, sum_y = 0, sum_x2 = 0, sum_xy = 0;
    for (int i = 0; i < n; i++) {
        sum_x += size_of_vector[i];
        sum_y += execution_time[i];
        sum_x2 += size_of_vector[i] * size_of_vector[i];
        sum_xy += size_of_vector[i] * execution_time[i];

        
    }


    //Coeficiente angular (inclinação)
    double slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    //Coeficiente linear
    double intercept = (sum_y - slope * sum_x) / n;


    // Cria os dados para a linha de regressão
    std::vector<double> regression_line(n);
    for (int i = 0; i < n; i++) {

        regression_line[i] = slope * size_of_vector[i] + intercept;
        cout << size_of_vector[i] << " " << slope * size_of_vector[i] + intercept << endl;
    }

    return 0;
}
