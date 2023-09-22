#include <iostream>
#include <ctime>

using namespace std;

long double fibo_iterativo(int n) {
    
    int n1, n2, cont, fibo;
    n1 = 1;
    n2 = 1;
    fibo = 1;
    cont = 3;
    
    while(cont <= n){
        fibo = n1 + n2;
        n2 = n1;
        n1 = fibo;
        
        cont += 1;
    }
    
    return fibo;
    
}

int main(int argc, char const *argv[])
{
    double temp_end;
    
    for (int i = 5; i < 40; ++i){
        
        temp_end = 0.0;
        
        for(int x = 0; x < 5000; x++){
            clock_t start = clock();
            fibo_iterativo(i);
            clock_t end = clock();
            temp_end += static_cast<double>(end - start) / CLOCKS_PER_SEC;
        }
        cout << i << " " << temp_end << endl;
    }


    return 0;
}