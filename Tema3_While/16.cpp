#include <stdio.h>

#include <iostream>
using namespace std;

int main()
{
    int num, original, reversed = 0, residuo;
    cout << "Introduce un número: ";
    cin >> num;

    original = num;

    // Invertir el número
    while (num > 0)
    {
        residuo = num % 10; // es el residuo de dividir num entre 10 (el último dígito)
        reversed = reversed * 10 + residuo;
        num = num / 10;
    }

    // Comparar original con invertido
    if (original == reversed)
        cout << "Es capicúa." << endl;
    else
        cout << "No es capicúa." << endl;

    return 0;
}