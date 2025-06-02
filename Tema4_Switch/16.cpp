/*Horario de Clases
Pide el día de la semana y muestra el horario de clases para ese día.*/ \
#include<iostream>
using namespace std;

int main()
{
    int dia;

    cout << "Ingrese el día de la semana:\n";
    cout << "1 = Lunes\n";
    cout << "2 = Martes\n";
    cout << "3 = Miércoles\n";
    cout << "4 = Jueves\n";
    cout << "5 = Viernes\n";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Horario del lunes: Precálculo y Matemática Discreta I\n";
        break;
    case 2:
        cout << "Horario del martes: Laboratorio de Fundamentos, Fundamentos, Elementos y Laboratorio de Elementos\n";
        break;
    case 3:
        cout << "Horario del miércoles: Precálculo y Matemática Discreta I\n";
        break;
    case 4:
        cout << "Horario del jueves: Fundamentos y Elementos\n";
        break;
    case 5:
        cout << "Horario del viernes: Discusión de Precálculo, luego Discusión de Matemática Discreta\n";
        break;
    default:
        cout << "Número de día no válido.\n";
    }

    return 0;
}
