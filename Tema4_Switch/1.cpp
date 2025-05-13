/*Día de la Semana
Pide un número del 1 al 7 e imprime el día de la semana correspondiente (1 = Lunes, 2 = Martes, etc.).*/
#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout << "Ingresa un numero de 1 al 7: \n";
    cin >> dia;
    if (dia > 0 && dia <= 7)
    {
        switch (dia)
        {
        case 1:
            cout << "Es lunes";
            break;
        case 2:
            cout << "Es martes";
            break;
        case 3:
            cout << "Es miercoles";
            break;
        case 4:
            cout << "Es jueves";
            break;
        case 5:
            cout << "Es viernes";
            break;
        case 6:
            cout << "Es sabado";
            break;
        default:
            cout << "Es domingo";
            break;
        }
    }
    else
    {
        cout << "El numero ingresado es invalido\n";
    }
    return 0;
}
