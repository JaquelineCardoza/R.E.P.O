/*Conversión de Notas a Letras
Solicita una calificación del 0 al 100 y muestra su equivalente en letras (A, B, C, D, F).*/

#include <iostream>
using namespace std;

int main()
{
    int nota;
    
    cout << "Ingresa su nota:\n";
    cin >> nota;

    
    if (nota < 0 || nota > 100)
    {
        cout << "Los datos no son validos\n";
    }
    else
    {
        if (nota >= 90 && nota <= 100)
        {
            cout << "Tu nota es: A\n";
        }
        else if (nota < 90 && nota >= 85)
        {
            cout << "Tu nota es: B\n";
        }
        else if (nota < 85 && nota >= 80)
        {
            cout << "Tu nota es: C\n";
        }
        else if (nota < 80 && nota >= 70)
        {
            cout << "Tu nota es: D\n";
        }
        else if (nota < 70 && nota >= 69)
        {
            cout << "Tu nota es: E\n";
        }
        else
        {
            cout << "Tu nota es: F\n";
        }
    }

    return 0;
}