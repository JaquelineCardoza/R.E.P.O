/*Suma de Dígitos de un Número
Solicita un número al usuario y calcula la suma de sus dígitos.*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0, suma = 0;
    cout << "Introduce un numero: \n";
    cin >> num;

    for (int i; num != i; num / 10)
    {
        //cout << "La NUM " << num << endl; //

        int residuo = num % 10;
        num /= 10;
        suma += residuo;
        //cout << "La suma " << suma << endl; //

    }
    cout << "La suma de sus digitos es: " << suma << endl; //
    return 0;
}