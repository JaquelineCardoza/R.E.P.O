/*Año Bisiesto
Pide un año y determina si es bisiesto.
informacion:
Para determinar si un año es bisiesto, sigue estos pasos:
Divide el año entre 4: Si la división es exacta (es decir, no hay residuo), el año es bisiesto, a menos que sea un año centenario (múltiplo de 100).
Si el año es centenario, divide entre 100: Si la división es exacta, el año no es bisiesto, a menos que también sea divisible por 400.
Si el año centenario es divisible por 400, es bisiesto.
En resumen, un año es bisiesto si es divisible por 4, excepto los años centenarios que no son divisibles por 400
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int anio;
    cout << "Ingresa tu anio;\n"; // anio es en vez de año,
    cin >> anio;

    // Verificar si el año es bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) // el anio tiene que ser divisible entre 4 pero no entre 100 o debe ser dibisible entre 400
    {
        cout << "El anio " << anio << " es bisiesto.\n";
    }
    else
    {
        cout << "El anio " << anio << " no es bisiesto.\n";
    }

    return 0;
}
