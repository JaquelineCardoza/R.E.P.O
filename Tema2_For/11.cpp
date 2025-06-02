/*Suma de Dígitos de un Número
Solicita un número al usuario y calcula la suma de sus dígitos.*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Introduce un numero: \n";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int digit = num % 10;                      // Obtiene el último dígito
        num /= 10;                                 // Elimina el último dígito del número
        cout << "La suma de sus digitos es: " << digit + num << endl; // Muestra el dígito actual
    }

    return 0;
}