#include <iostream>
using namespace std;

int main() {
    int decimal, resto;
    int binario[32]; // Máximo 32 bits (suficiente para números tipo int)
    int i = 0;       // Índice para el arreglo

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    // Caso especial si es 0
    if (decimal == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    // Guardar los bits en el arreglo (de atrás hacia adelante)
    while (decimal > 0) {
        resto = decimal % 2;
        binario[i] = resto;
        i++;
        decimal = decimal / 2;
    }

    // Imprimir los bits en orden inverso (desde el último al primero)
    cout << "Binario: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;

    return 0;
}
