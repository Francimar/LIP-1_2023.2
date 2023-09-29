#include <iostream>
using namespace std;


double exponencial(double base, int expoente, double resultado) {
    
    if (expoente == 0) {
        return resultado;
    }
    return exponencial(base, expoente - 1, resultado * base);
}

int main() {
    double base;     
    int expoente;
    
    cin >> base >> expoente;
    double resultado = exponencial(base, expoente,1);
    
    cout << resultado << endl;
    
    return 0;
}
