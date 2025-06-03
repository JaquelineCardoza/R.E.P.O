/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0;
    int n;
    cout << "Ingrese un numero\n";
    cin >> n;

    while (c < n)
    {
        cout << a; // imprime el número actual de la serie de Fibonacci y se verifica si i es menor al numero ingresado menos 1
        if (c < n - 1)
        {
            cout << ", ";     // Imprime la coma y un espacio después del número, por ejemplo: 0, 1, 1, ...
            int next = a + b; // Calcula el siguiente número en la serie de Fibonacci sumando los dos anteriores
            a = b;            // Mueve b a a, porque en la siguiente iteración a debe tomar el valor que tenía b.
            b = next;         // Asigna a b el nuevo número que calculamos (next), preparándose para la siguiente suma.
        }
        c++;
        cout << "\n"; 
    }

    cout << "salio";
    return 0;
}