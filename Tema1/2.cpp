/*Número Par o Impar
Solicita un número al usuario y determina si es par o impar.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Variables
    int num, resul;
    cout << "Please enter a number \n";
    cin >> num;
    
    // variable para verificar si es par o impar, el resul tiene quedar 0 si es par y 1 si es impar
    resul = num % 2;
    if (resul == 0)
    {
        cout << "es par";
    }
    else
    {
        cout << "es impar";
    }
    return 0;
}