/*Calculadora Avanzada
Mejora la calculadora simple agregando ^ para exponenciación y % para módulo.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0;
    char operation;

    cout << "Introduce la operacion: \n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Potencia\n";
    cout << "6. Modulo\n";

    cin >> operation;

    if (operation == 5)
    {
        cout << "Ingrese el numero base:";
        cin >> num1;
        cout << "Ingrese el numero del exponente a elevar:";
        cin >> num2;
    }
    else
    {
    }
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    switch (operation)
    {

    case '1':
        cout << "El resultado es: " << num1 + num2 << endl;
        break;
    case '2':
        cout << "El resultado es: " << num1 - num2 << endl;
        break;
    case '3':
        cout << "El resultado es: " << num1 * num2 << endl;
        break;
    case '4':
        // verificar si num 2 es distinto  de cero
        if (num2 != 0)
            cout << "El resultado es: " << num1 / num2 << endl;
        else
            cout << "Error: Division por cero no permitida." << endl;
        break;
    case '5':
        cout << "El resultado es potencia: " << pow(num1, num2) << endl;
        break;
    case '6':
        if (num2 != 0)
        {
            int resul = num1 % num2;
            cout << "El resultado del modulo es: " << resul << endl;
        }
        break;
    default:
        cout << "Operacion no valida." << endl;
        break;
    }

    return 0;
}