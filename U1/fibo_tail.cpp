
#include <iostream>

int fibonacci(int n, int a, int b) {
    
    if (n == 1) {
        return b;
    }
    return fibonacci(n - 1, b, a + b);
}

int main() {
    int n = 3; 
    for(int x = 1; x<7; x++){
        int resultado = fibonacci(x,0,1);
        std::cout << "Fibonacci(" << x << ") = " << resultado << std::endl;
    }
    return 0;
}
