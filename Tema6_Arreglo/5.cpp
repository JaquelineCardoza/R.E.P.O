/*Contar Números Pares e Impares
Llena un arreglo con N números y cuenta cuántos son pares y cuántos son impares.*/
#include <iostream>
using namespace std;

int main()
{

    int N;
    cout << "Contar Números Pares e Impares" << endl;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int numeros[N]; // Usar arreglo estático en lugar de memoria dinámica
    int pares = 0, impares = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": "; // solicito los numeros que van dentro del arreglo
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) // verifico si el número es par
        {
            pares++; // incremento el contador de pares
        }
        else
        {
            impares++; // incremento el contador de impares
        }
    }

    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}