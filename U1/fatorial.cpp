// Fatorial Recursivo
#include <iostream>
#include <ctime>

using namespace std;

long double fatorial_recursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial_recursivo(n - 1);
    }
}

long double fatorial_tail(int n, int resultado){
    if (n == 0) {
        return resultado;
    } else {
        return fatorial_tail(n - 1, n*resultado);
    }
}

long double fatorial_iterativo (int n){

    int result = 1;
    for (int i = 1; i <= n; ++i){    
        result *= i;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    double temp_end;
    
    for (int i = 5; i < 10000; ++i){
        
        temp_end = 0.0;
        
        for(int x = 0; x < 1000; x++){
            clock_t start = clock();
            fatorial_recursivo(i);
            //fatorial_tail(i,1);
            //fatorial_iterativo(i);
            clock_t end = clock();
            temp_end += static_cast<double>(end - start) / CLOCKS_PER_SEC;
        }
        cout << i << " " << temp_end/1000 << endl;
    }


    return 0;
}