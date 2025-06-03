/*Triángulo de Asteriscos
Imprime un triángulo de altura N usando asteriscos.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduce la altura del triángulo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // Controla las filas
    {
        for (int j = 1; j <= i; j++) // Imprime asteriscos en cada fila
        {
            cout << "*";
        }
        cout << endl; // Salto de línea después de cada fila
    }
    return 0;
}