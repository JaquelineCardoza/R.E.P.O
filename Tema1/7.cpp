/*Evaluación de Temperatura
Pide la temperatura en grados Celsius y muestra un mensaje si está fría (menor a 15°C), templada (15°C - 25°C) o caliente (más de 25°C).*/
#include <iostream>
using namespace std;

int main()
{
    // variables
    int tem;
    cout << "Ingresa la temperatura en grado Celsius\n";
    cin >> tem;

    // verificamos si es menor de 15
    if (tem < 15)
    {
        cout << "La temperatura del ambiente es fria\n";
    }
    else if (tem >= 15 and tem <= 25)
    {
        cout << "La temperatura del ambiente templada\n";
    }
    else
    {
        cout << "La temperatura del ambiente calida\n";

    }

    return 0;
}