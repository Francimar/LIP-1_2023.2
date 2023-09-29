#include <iostream>
#include <ctime>

using namespace std;

long double fibo_recursivo(int n) {
    if (n < 1) {
        return 0;
    } else if (n == 1){
        return 1;
    }else{
    	return fibo_recursivo(n-1) + fibo_recursivo(n-2);
    }
}

int main(int argc, char const *argv[])
{
    double temp_end;
    
    for (int i = 5; i < 40; ++i){
        
        temp_end = 0.0;
        
        for(int x = 0; x < 100; x++){
            clock_t start = clock();
            fibo_recursivo(i);
            clock_t end = clock();
            temp_end += static_cast<double>(end - start) / CLOCKS_PER_SEC;
        }
        cout << i << " " << temp_end << endl;
    }


    return 0;
}