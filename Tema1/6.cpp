/*Día Laboral o Fin de Semana
Solicita un número del 1 al 7 y muestra si corresponde a un día laboral (lunes a viernes) o fin de semana (sábado y domingo).*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingresa un numero del 1 al 7\n";
    cin >> num;

    if (num > 0 && num <= 5)
    {
        cout << "Es dia laboral\n";
    }
    else if (num > 5 && num <= 7)
    {
        cout << "Es fin de semana\n";
    }
    else
    {
        cout << "Datos ingresados no son validos\n";
    }

    return 0;
}