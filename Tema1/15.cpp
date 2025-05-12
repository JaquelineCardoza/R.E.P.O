/*Velocidad y Multa
Pide la velocidad de un conductor. Si supera los 60 km/h, se le aplica una multa;
si supera los 80 km/h, la multa es mayor.*/
#include <iostream>
using namespace std;

int main()
{
    int velocidad;
    cout << "Ingrese la velocidad del conductor\n";
    cin >> velocidad;

    if (velocidad >= 60)
    {
        cout << "Su multa es de $ 60.00 ";
    }
    else if (velocidad > 80)
    {
        cout << "Su multa es de $ 100.00 ";
    }
    else
    {
        cout << "No aplica multa ";
    }
    return 0;
}