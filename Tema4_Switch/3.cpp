/*Mes del Año
Pide un número del 1 al 12 e imprime el nombre del mes correspondiente.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Ingresa un numero del 1 al 12\n";
    cin >> num;

    if (num > 0 && num <= 12)
    {
        switch (num)
        {
        case 1:
            cout << "Enero";
            break;
        case 2:
            cout << "Febrero";
            break;
        case 3:
            cout << "Marzo";
            break;
        case 4:
            cout << "Abril";
            break;
        case 5:
            cout << "Mayo";
            break;
        case 6:
            cout << "Junio";
            break;
        case 7:
            cout << "Julio";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Septiembre";
            break;
        case 10:
            cout << "Octubre";
            break;
        case 11:
            cout << "Noviembre";
            break;
        default:
            cout << "Diciembre";
            break;
        }
    }
    else
    {
        cout << "El datos ingresado no son valido\n";
    }

    return 0;
}