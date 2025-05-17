/*Números Pares del 1 al 50
Muestra en pantalla los números pares del 1 al 50.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 50;
    int num2 = 1;
    cout << "Los numeros son:\n";
    for (int i = 1; i <= num; i++) // vamos imprimiendo hasta el numero ingresado
    {
        if (i % 2 == 0) // verificar si es par
        {
            cout << num2++ << "-" << i << '\n'; // imprime los numeros si se cumple la condicion
        }
    }

    return 0;
}