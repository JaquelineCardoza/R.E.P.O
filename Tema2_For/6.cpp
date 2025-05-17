/*Suma de Números Pares
Solicita un número N al usuario y calcula la suma de los números pares desde 1 hasta N.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int suma = 0;
    cout << "Ingrese un numero\n";
    cin >> num;
    for (int i = 2; i <= num; i += 2) // solo números pares desde 2 hasta N
    {
        suma += i;
    }
    cout << "La suma de los numeros pares desde 1 hasta " << num << " es: " << suma << endl;
    return 0;
}
