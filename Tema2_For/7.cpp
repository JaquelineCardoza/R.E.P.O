/*Factorial de un Número
Pide un número al usuario y calcula su factorial.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Introduce un número: \n";
    cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "El factorial es: " << factorial << endl;
    return 0;
}