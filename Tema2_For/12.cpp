/*Cálculo de Potencia
Pide dos números base y exponente, y calcula base^exponente sin usar la función pow().*/
#include <iostream>
using namespace std;

int main()
{
    int pote = 0, base = 0, resultado = 1;
    cout << "Ingresa la base de su numero: \n";
    cin >> base;
    cout << "Ingresa la potencia que desea para su numero: \n";
    cin >> pote;

    for (int i = 1; i <= pote; i++)
    {
        resultado *= base;
    }
    cout << base << "^" << pote << " = " << resultado << endl;

    return 0;
}