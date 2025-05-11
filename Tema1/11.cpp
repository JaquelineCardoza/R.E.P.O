#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int dist1, dist2;

    // Solicita los dos números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Calcular distancia de num1 a 100
    if (100 - num1 >= 0) {
        dist1 = 100 - num1;
    } else {
        dist1 = num1 - 100;
    }

    // Calcular distancia de num2 a 100
    if (100 - num2 >= 0) {
        dist2 = 100 - num2;
    } else {
        dist2 = num2 - 100;
    }

    // Comparar las distancias
    if (dist1 < dist2) {
        cout << num1 << " está más cerca de 100." << endl;
    } else if (dist2 < dist1) {
        cout << num2 << " está más cerca de 100." << endl;
    } else {
        cout << "Ambos números están a la misma distancia de 100." << endl;
    }
    return 0;
}
