/*Número Primo
Pide un número y determina si es primo.*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0, result = 0;
    cout << "Ingresa un numero: \n";
    cin >> num;
    bool esPrimo = true;
    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                esPrimo = false;
                
            }
        }
    }
    if (esPrimo)
        cout << num << " es primo." << endl;
    else
        cout << num << " no es primo." << endl;

    return 0;
}