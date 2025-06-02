/*Conversión de Unidades de Longitud
Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversión.*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    double valor;

    cout << "Seleccione una opción:\n";
    cout << "1 = cm a pulgadas\n";
    cout << "2 = metros a pies\n";
    cout << "3 = km a millas\n";
    cin >> opcion;

    cout << "Ingrese el valor a convertir: ";
    cin >> valor;

    switch (opcion)
    {
    case 1:
        cout << valor << " cm = " << (valor / 2.54) << " pulgadas\n";
        break;
    case 2:
        cout << valor << " metros = " << (valor * 3.281) << " pies\n";
        break;
    case 3:
        cout << valor << " km = " << (valor * 0.621371) << " millas\n";
        break;
    default:
        cout << "Opción no válida.\n";
    }

    return 0;
}
