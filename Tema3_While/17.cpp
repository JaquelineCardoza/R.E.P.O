/* División Mediante Restas
    Pide dos números y realiza la división sin usar el operador /, solo con restas sucesivas.
*/

#include <iostream>
using namespace std;

int main()
{
    int dividendo, divisor, cociente = 0, residuo;

    // Solicita al usuario el dividendo
    cout << "Introduce el dividendo: ";
    cin >> dividendo;
    // Solicita al usuario el divisor
    cout << "Introduce el divisor: ";
    cin >> divisor;

    // Inicializa el residuo con el valor del dividendo
    residuo = dividendo;

    // Verifica si el divisor es cero para evitar división por cero
    if (divisor == 0)
    {
        cout << "Error: división por cero." << endl;
        return 1;
    }

    // Realiza restas sucesivas hasta que el residuo sea menor que el divisor
    while (residuo >= divisor)
    {
        residuo -= divisor; // Resta el divisor al residuo
        cociente++;         // Incrementa el cociente por cada resta
    }

    // Muestra el resultado: cociente y residuo
    cout << "Cociente: " << cociente << endl;
    cout << "Residuo: " << residuo << endl;

    return 0;
}