/*Promedio de N Números
Solicita al usuario N números y calcula su promedio.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "La cantidad debe ser mayor que 0." << endl;
    }
    else
    {

        double suma = 0.0;
        for (int i = 1; i <= n; i++)
        {
            double numero;
            cout << "Ingrese el número " << i << ": ";
            cin >> numero;
            suma += numero; // Suma el número ingresado a la suma total
        }

        double promedio = suma / n; // Calcula el promedio
        cout << "El promedio es: " << promedio << endl;
    }
    return 0;
}