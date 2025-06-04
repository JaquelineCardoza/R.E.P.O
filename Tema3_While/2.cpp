/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int suma = 0; // Acumulador para la suma

    cout << "Ingrese un numero (0 para terminar):\n";
    cin >> num;

    while (num != 0)
    {
        suma += num; // Suma el número ingresado al acumulador
        cout << "Ingrese un numero (0 para terminar):" << endl;
        cin >> num;
    }

    cout << "La suma de los números ingresados es: " << suma << endl;

    return 0;
}