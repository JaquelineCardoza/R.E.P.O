/*Suma de Elementos
Escribe un programa que almacene N números en un arreglo y calcule la suma de sus elementos.*/
#include <iostream>
using namespace std;

int main()
{
    int n; // Variable para la cantidad de elementos
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n; // Lee la cantidad de elementos

    int arreglo[100]; // Arreglo para almacenar hasta 100 números
    int suma = 0;     // Variable para acumular la suma

    // Ciclo para leer los elementos y sumarlos
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];      // Lee cada elemento
        suma += arreglo[i];     // Suma el elemento al acumulador
    }

    // Muestra la suma total de los elementos
    cout << "La suma de los elementos es: " << suma << endl;
    return 0;
}
