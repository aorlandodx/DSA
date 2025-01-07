#include <iostream>
using namespace std;

// Función recursiva para imprimir los números del 1 al n
void imprimirNumeros(int n) {
    if (n <= 0) { // Caso base: si n es 0 o menor, no se imprime nada
        return;
    }
    imprimirNumeros(n - 1); // Llamada recursiva primero
    cout << n << " "; // Luego imprime el número actual
}

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingresa un número positivo." << endl;
    } else {
        cout << "Los números del 1 al " << numero << " son: ";
        imprimirNumeros(numero); // Llamada inicial a la función
        cout << endl;
    }

    return 0;
}
