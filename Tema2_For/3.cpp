/*Suma de los Primeros N Números
Solicita un número N al usuario y calcula la suma de los primeros N números naturales.*/

#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0, sumatota = 0;
    cout << "Ingrese el numero de numeros a sumar:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        suma += 1; // Suma 1 a la suma acumulada en cada iteración
        sumatota += suma; // Acumula la suma total de los números
    }
    cout << "La suma total de los primeros " << n << " numeros es: " << sumatota << endl;
    return 0;
}