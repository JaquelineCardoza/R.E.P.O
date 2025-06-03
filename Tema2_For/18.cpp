/*Dígito Más Grande en un Número
Solicita un número y encuentra el dígito más grande en él.*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Introduce un número: ";
    cin >> num;

    int maxDigito = 0;

    // Si el número es negativo, lo convertimos a positivo manualmente
    if (num < 0)
        num = -num;

    // Usando for para recorrer los dígitos
    for (int i = 0; num > i; num /= 10)
    {
        int digito = num % 10; // Obtiene el último dígito
        if (digito > maxDigito)
            maxDigito = digito;
    }

    cout << "El dígito más grande es: " << maxDigito << endl;
    return 0;
}