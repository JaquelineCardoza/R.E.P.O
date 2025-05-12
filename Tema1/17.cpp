/*Precio de Entrada a un Parque
Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.
*/
#include <iostream>
using namespace std;

int main()
{
    int age = 0; // recordar siempre inicializar las variables en 0
    cout << "Ingresa la edad del menor:\n";
    cin >> age;
    if (age < 5)
    {
        cout << "Entran de choto\n"; // es gratis
    }
    else if (age >= 5 && age <= 12)
    {
        cout << "Pagen $ 5.00\n"; // es gratis
    }
    else
    {
        cout << "Pagen $ 10.00\n"; // es gratis
    }

    return 0;
}