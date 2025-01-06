#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}


int main(){
    int number = 5;
    int resultado = factorial(number);
    cout << "El factorial de " << number << " es: " << resultado << endl;
    
    return 0;
}

