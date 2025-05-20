/*Evaluación de Calorías
Pide un tipo de comida (1 = Fruta, 2 = Verdura, 3 = Carne) y muestra un rango de calorías aproximado.
1 = 50 - 100 calorías
2 = 20 - 80 calorías
3 = 165 - 337 calorías
*/
#include <iostream>
using namespace std;

int main()
{
    int comi = 0; // para saber que comida selecciona

    cout << "=== Menú de Evaluación de Calorías ===\n";
    cout << "Seleccione un tipo de comida:\n";
    cout << "  1. Fruta\n";
    cout << "  2. Verdura\n";
    cout << "  3. Carne\n";
    cout << "Ingrese su opción (1-3):\n ";
    cin >> comi;
    switch (comi)
    {
    case 1:
        cout << "Fruta seleccionada. Calorías aproximadas: 50 - 100\n";
        break;
    case 2:
        cout << "Verdura seleccionada. Calorías aproximadas: 20 - 80\n";
        break;
    case 3:
        cout << "Carne seleccionada. Calorías aproximadas: 165 - 337\n";
        break;
    default:
        cout << "Opción no válida. Por favor, seleccione 1, 2 o 3.\n";
        break;
    }
    return 0;
}