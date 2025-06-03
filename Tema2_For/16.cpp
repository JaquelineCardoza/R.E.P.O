/*Aproximación de Pi
Calcula una aproximación de π utilizando la serie de Leibniz con N términos.*/

#include <iostream>
using namespace std;

int main()
{
    int numTerminos;
    cout << "Ingrese el número de términos para aproximar pi: ";
    cin >> numTerminos;

    double suma = 0.0;

    for (int i = 0; i < numTerminos; i++)
    {
        double termino = 1.0 / (2 * i + 1); // denominadores: 1, 3, 5, 7...
        if (i % 2 == 0)
        {
            suma += termino; // si i es par: sumamos
        }
        else
        {
            suma -= termino; // si i es impar: restamos
        }
    }

    double pi = suma * 4; // multiplicamos el resultado por 4
    cout << "Aproximación de pi con " << numTerminos << " términos: " << pi << endl;

    return 0;
}
