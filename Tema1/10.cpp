/*Calculadora de Tarifa de Envío
Pide el peso de un paquete y cobra $5 si pesa hasta 5kg, $10 si pesa entre 6kg y 10kg, y $15 si pesa más de 10kg*/
#include <iostream>
using namespace std;

int main()
{
    // variable
    int peso;
    cout << "Ingresa el peso del paquete en kg: \n";
    cin >> peso;
    // comparacion
    if (peso > 0 and peso <= 5)
    {
        cout << "La tarifa es de $ 5.00 \n";
    }
    else if (peso > 5 && peso < 10)
    {
        cout << "La tarifa es de $ 10.00 \n";
    }
    else if (peso >= 10)
    {
        cout << "La tarifa es de $ 15.00 \n";
    }
    else
    {
        cout << "Los datos ingresados no son validos \n";
    }

    return 0;
}