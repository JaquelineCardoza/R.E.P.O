/*Adivina el Número
Genera un número aleatorio entre 1 y 100.
El usuario debe adivinarlo, y el programa debe indicar si el número es mayor o menor hasta que lo acierte.*/
#include <iostream>
using namespace std;

int main()
{
    int num = 37;
    int intento;

    cout << "Adivina el numero secreto" << endl;
    cout << "Ingresa un numero entre 1 y 100: ";
    cin >> intento;

    while (intento != num)
    {
        if (intento > num)
        {
            cout << "El numero es demasiado alto. Intentalo de nuevo: ";
        }
        else
        {
            cout << "El numero es demasiado bajo. Inténtalo de nuevo: ";
        }
        cin >> intento; // Leer un nuevo intento
    }
    cout << "Felicidades. Has adivinado el numero secreto." << endl;

    return 0;
}