/*Promedio de Calificaciones
Pide calificaciones al usuario hasta que ingrese un número negativo, luego muestra el promedio.
*/

#include <iostream>
using namespace std;

int main()
{
    double n = 0, suma = 0, nDatos = 0;
    double promedio = 0;
    do
    {
        // pedimos las calificaciones hasta que ingrese un numero negativo
        cout << "Calificaciones\n";
        cin >> n;
        suma += n; // sumamos las notas
        nDatos++;  // para contar el numero de datos ingresados
        cout << "------------------------------" << endl;

    } while (n > 0);
    promedio = suma / (nDatos - 1); // restamos 1, para no tomar en cuenta el valor negativo
    cout << "Suma de datos: " << suma << "\nPromedio: " << promedio << endl;

    return 0;
}