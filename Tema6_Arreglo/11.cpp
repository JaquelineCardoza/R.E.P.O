/*Fusión de Dos Arreglos
Pide dos arreglos de N elementos y combínalos en un tercer arreglo.*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese la cantidad de numeros del primer arreglo: \n";
    cin >> n1;
    cout << "Ingrese la cantidad de numeros del segundo arreglo: \n";
    cin >> n2;
    int num1[n1];
    int num2[n2];
    int fusion[n1 + n2];
    // Ingreso de datos para el primer arreglo
    for (int i = 0; i < n1; i++)
    {
       cout << "Ingrese el número #" << i + 1 << " del primer arreglo: "; // solicito los numeros que van dentro del arreglo
        cin >> num1[i];
    }

    // Ingreso de datos para el segundo arreglo
    for (int i = 0; i < n2; i++)
    {
        cout << "Ingrese el número #" << i + 1 << " del segundo arreglo: "; // solicito los numeros que van dentro del arreglo
        cin >> num2[i];
    }
    // Fusión de los dos arreglos en uno solo
    for (int i = 0; i < n1; i++) // Copiar elementos del primer arreglo
    {
        fusion[i] = num1[i];
    }
    for (int i = 0; i < n2; i++) // Copiar elementos del segundo arreglo
    {
        fusion[n1 + i] = num2[i];
    }

    // Mostrar el arreglo fusionado
    cout << "\nArreglo fusionado:\n";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << fusion[i] << " ";
    }
    cout << endl;

    return 0;
}