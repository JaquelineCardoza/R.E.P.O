/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0.  */

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Ingrese el numero para la cuenta regresiva: ";
    cin >> n;

    while (n >= 0)
    {
        cout << n << "... ";
        n--;
    }
    cout << "💣 💥💥💥";

    return 0;
}