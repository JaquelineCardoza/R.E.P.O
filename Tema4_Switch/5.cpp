/*Calculadora Simple
Pide dos números y una operación (+, -, *, /), y muestra el resultado.
*/

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "Introduce la operacion (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "El resultado es: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "El resultado es: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "El resultado es: " << num1 * num2 << endl;
        break;
    case '/':
        // verificar si num 2 es distinto  de cero
        if (num2 != 0)
            cout << "El resultado es: " << num1 / num2 << endl;
        else
            cout << "Error: Division por cero no permitida." << endl;
        break;
    default:
        cout << "Operacion no valida." << endl;
        break;
    }

    return 0;
}