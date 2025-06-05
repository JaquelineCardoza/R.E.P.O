/*Dígitos de un Número
Pide un número al usuario y muestra cuántos dígitos tiene.*/

#include <iostream>
using namespace std;

int main()
{

    int num = 0, cantidad = 0;
    cout << "Introduce un numero: \n";
    cin >> num;

    while (num != 0)
    {
        num /= 10;  // dividimoos entre 10 hasta que el num sea 0
        cantidad++; // sumamos las veces que se realiza para asi contar los digitos que contiene
    }
    cout << "Los digitos son: " << cantidad << endl; //

    return 0;
}