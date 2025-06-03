/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

#include <iostream>
using namespace std;

int main()
{
    int consumo;

    cout << "Ingrese el consumo de electricidad en kWh: ";
    cin >> consumo;

    if (consumo < 0)
    {
        cout << "El consumo no puede ser negativo." << endl;
    }
    else if (consumo < 100)
    {
        cout << "Tarifa: Baja. Total a pagar en dolares $ " << consumo * 0.14 << endl;
    }
    else if (consumo <= 200)
    {
        cout << "Tarifa: Media.Total a pagar en dolares $ " << consumo * 0.14 << endl;
    }
    else
    {
        cout << "Tarifa: Alta. Total a pagar en dolares $ " << consumo * 0.14 << endl;
    }

    return 0;
}
