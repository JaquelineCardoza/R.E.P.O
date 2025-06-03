/*Número Armstrong
Pide un número y determina si es un número de Armstrong (Ejemplo: 153 → 1³ + 5³ + 3³ = 153).*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, original, suma = 0, digitos = 0;
    cout << "Introduce un número: ";
    cin >> num;

    original = num; // Guarda el número original para comparar al final

    // Contar la cantidad de dígitos usando un ciclo for
    int temp = num;
    for (; temp != 0; temp /= 10)
        digitos++; // Incrementa 'digitos' por cada dígito del número

    // Calcular la suma de los dígitos elevados a la cantidad de dígitos usando un ciclo for
    temp = num;
    for (; temp != 0; temp /= 10)
    {
        int digito = temp % 10;
        suma += pow(digito, digitos);
    }

    if (suma == original)
        cout << original << " es un número de Armstrong." << endl;
    else
        cout << original << " no es un número de Armstrong." << endl;

    return 0;
}