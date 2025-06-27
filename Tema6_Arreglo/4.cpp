/*Búsqueda de un Número
Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.*/

#include <iostream>
using namespace std;

int main()
{

    int N, suma = 0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;  

     // Validar que N sea positivo y razonable

    int numeros[N]; // Usar arreglo estático en lugar de memoria dinámica

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": "; // solicito los numeros que van dentro del arreglo
        cin >> numeros[i];
    } 

    int buscar;
    bool encontrado = false;
    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    for (int i = 0; i < N; i++) {
        if (numeros[i] == buscar) {
            encontrado = true;
        }
    }

    if (encontrado) {
        cout << "El número " << buscar << " está en el arreglo." << endl;
    } else {
        cout << "El número " << buscar << " NO está en el arreglo." << endl;
    }
    return 0;
}