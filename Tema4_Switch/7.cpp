/*Conversión de Monedas
Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) y realiza la conversión.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // declaramos variables
    double money,
        eur = 0.8771,
        jpy = 142.1252,
        gbp = 0.7455,
        total;
    char opc;
    cout << "Ingresa la cantidad de dinero en: ";
    cin >> money;

    // que selecione cual la va convertir
    cout << "Selecione cual comversion necesita: " << endl;
    cout << "a Euro (EUR)" << endl;
    cout << "b Yen (JPY)" << endl;
    cout << "c Libra esterlina (GBP)" << endl;
    cout << "Opcion: ";
    cin >> opc;

    // verificar si el numero es
    if (money > 0)
    {
        switch (opc)
        {
        case 'a':
            total = money * eur;
            cout << "El resultado en Euro " << total << endl;
            break;
        case 'b':
            total = money * jpy;
            cout << "El resultado en Yen " << total << endl;
            break;
        case 'c':
            total = money * gbp;
            cout << "El resultado en Libra esterlina es: " << total << endl;
            break;

        default:
            cout << "Opcion no valida, por favor elija una opcion del a al c" << endl;
            break;
        }
    }
    else
    {
        cout << "Opcion no valida, por favor ingresa un valor positivos y no letras" << endl;
    }
    return 0;
}