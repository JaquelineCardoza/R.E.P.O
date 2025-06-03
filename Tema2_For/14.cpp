/*Invertir un Número
Solicita un número y muestra su inverso (Ejemplo: 123 → 321).*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0, inverso = 0; // Variables para el número original y su inverso
    cout << "Introduce un numero: \n";
    cin >> num; // Solicita al usuario el número a invertir

    // Ciclo para invertir el número
    for (; num != 0; num /= 10) // Mientras num tenga dígitos
    {
        int residuo = num % 10;           // Obtiene el último dígito de num
        inverso = inverso * 10 + residuo; // Agrega el dígito al inverso
        // num se actualiza en la expresión del for (num /= 10)
    }

    cout << "El número invertido es: " << inverso << endl; // Muestra el resultado
    return 0;
}