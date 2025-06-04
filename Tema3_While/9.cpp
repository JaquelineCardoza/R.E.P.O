/*Cálculo del Factorial
Solicita un número y usa while para calcular su factorial.*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0, factorial = 1, i = 1;
    cout << "Ingresa un numero" << endl;
    cin >> n;

    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    cout << "El factorial es: " << factorial << endl;


    return 0;
}