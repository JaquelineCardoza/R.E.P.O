/*Número Mayor y Menor
Llena un arreglo con N números y encuentra el número mayor y el menor.*/

#include <iostream>
using namespace std;

int main()
{

    int N;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int numeros[N]; // Usar arreglo estático en lugar de memoria dinámica

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": "; // solicito los numeros que van dentro del arreglo
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < N; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        else
        {

            menor = numeros[i];
        }
    }

    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}
