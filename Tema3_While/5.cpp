/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 2;
    int suma = 0;

    cout << "Ingrese un numero\n";
    cin >> n;
    while (i <= n)
    {
        suma += i;
        i += 2;
    }
    cout << "La suma de los numeros pares desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}