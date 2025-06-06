/*Suma de Dígitos
Pide un número y suma todos sus dígitos hasta obtener un solo dígito.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Introduce un numero: \n";
    cin >> num;

    // Repetir mientras el número tenga más de un dígito
    while (num >= 10)
    {
        int suma = 0;
        while (num != 0)
        {
            suma += num % 10;
            num /= 10;
        }
        num = suma;
        cout << "El resultado es: " << num << endl;
    }

    return 0;
}