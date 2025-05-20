/*Días en un Mes
Pide el número de un mes y muestra cuántos días tiene.*/

#include <iostream>
using namespace std;

int main()
{

    // variables
    int mes;
    int dia;

    cout << "Ingresa un números de 1 al 12 \n";
    cin >> mes;
    if (mes >= 1 && mes <= 12)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            dia = 1;
        }
        else if (mes == 2)
        {
            dia = 2;
        }
        else
        {
            dia = 1;
        }
        switch (dia)
        {
        case 1:
            cout << "El mes ingresado tiene 31 dias";
            break;
        case 2:
            cout << "El mes ingresado tiene 28 dias";
            break;
        default:
            cout << "El mes ingresado tiene 30 dias";
            break;
        }
    }
    else
    {
        cout << "los datos ingresados no son validos";
    }

    return 0;
}
