/*Sistema de Transporte Público
Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.
*/
#include <iostream>
using namespace std;

int main()
{
    int transporte;

    cout << "Seleccione el tipo de transporte \n1 = Bus \n2 = Metro \n3 = Taxi ";
    cin >> transporte;

    switch (transporte)
    {
    case 1:
        cout << "Costo estimado: $0.25\n";
        break;
    case 2:
        cout << "Costo estimado: $1.00\n";
        break;
    case 3:
        cout << "Costo estimado: $5.00 - $15.00\n";
        break;
    default:
        cout << "Opción no válida.\n";
    }

    return 0;
}
