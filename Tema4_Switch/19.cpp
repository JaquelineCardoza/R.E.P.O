/*Sistema de Evaluación de Conductores
Solicita la cantidad de multas de un conductor y muestra un mensaje sobre su nivel de riesgo.
*/

#include <iostream>
using namespace std;

int main()
{
    int multas;

    cout << "Ingrese la cantidad de multas: ";
    cin >> multas;

    switch (multas)
    {
    case 0:
        cout << "Conductor ejemplar.\n";
        break;
    case 1:
    case 2:
    case 3:
        cout << "Riesgo moderado.\n";
        break;
    case 4:
    case 5:
        cout << "Alto riesgo. Puede perder la licencia.\n";
        break;
    default:
        cout << "Alto riesgo. Puede perder la licencia.\n";
        break;
    }

    return 0;
}
