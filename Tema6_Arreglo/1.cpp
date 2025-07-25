/*Suma de Elementos
Escribe un programa que almacene N números en un arreglo y calcule la suma de sus elementos.*/
#include <iostream>
using namespace std;

int main()
{

    int N, suma = 0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;  

     // Validar que N sea positivo y razonable
    if (N <= 0 || N > 100) {
        cout << "Cantidad no valida." << endl; 
        return 1;
    }

    int numeros[N]; // Usar arreglo estático en lugar de memoria dinámica

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": "; // solicito los numeros que van dentro del arreglo
        cin >> numeros[i];
        suma += numeros[i];
    }
    cout << "Suma de los datos ingresado: " << suma << endl;

    return 0;
}