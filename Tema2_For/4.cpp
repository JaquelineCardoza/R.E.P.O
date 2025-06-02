/*Tabla de Multiplicar
Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Ingrese el numero para ver su tabla de multiplicacion:" << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}