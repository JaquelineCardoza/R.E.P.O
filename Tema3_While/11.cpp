/*Validación de Entrada
Pide un número entre 1 y 10. Si el usuario ingresa un valor fuera de ese rango,
debe volver a intentarlo hasta que lo haga correctamente.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    // Pedir el número hasta que esté en el rango correcto
    do
    {
        cout << "Ingrese un numero entre 1 y 10:\n";
        cin >> num;
        if (num < 1 || num > 10)
        {
            cout << "Numero no valido, vuelva a ingresar\n";
        }
    } while (num < 1 || num > 10);

    cout << "Su numero es: " << num << endl;

    return 0;
}