/*Comparación de Números
Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.
*/
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter your first number:\n";
    cin >> num1;
    cout << "Enter your second number:\n";
    cin >> num2;

    if (num1 == num2)
    {
        cout << "The numbers entered are the same";
    }
    else if (num1 > num2)
    {
        cout << "The first number is greater\n";
        cout << "The second number is smaller";
    }
    else
    {
        cout << "The second number is greater\n";
        cout << "The first number is smaller";
    }
    return 0;
}
