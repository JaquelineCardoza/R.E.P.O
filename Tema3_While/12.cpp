/*Máximo Común Divisor (MCD)
Pide dos números y calcula su MCD usando el algoritmo de Euclides.*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ingrese tu primer numero:\n";
    cin >> a;
    cout << "Ingrese tu segundo numero:\n";
    cin >> b;

    // Aseguramos que a sea el mayor
    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Algoritmo de Euclides
    int residuo;
    do {
        residuo = a % b;
        a = b;
        b = residuo;
    } while (residuo != 0);

    cout << "El MCD es: " << a << endl;
    return 0;
}