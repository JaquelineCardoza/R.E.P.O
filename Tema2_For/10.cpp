/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci.
En matemática, la sucesión de Fibonacci se trata de una serie infinita de números naturales que empieza con un 0 y un 1 y continúa añadiendo números que son la suma de los dos anteriores:
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero\n";
    cin >> n;

    int a = 0, b = 1;
    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; ++i) // Aumenta el valor de la variable i en 1 antes de usarla en la expresión actual (pre-incremento).
    {
        cout << a; // imprime el número actual de la serie de Fibonacci y se verifica si i es menor al numero ingresado menos 1
        if (i < n - 1)
        {
            cout << ", ";     // Imprime la coma y un espacio después del número, por ejemplo: 0, 1, 1, ...
            int next = a + b; // Calcula el siguiente número en la serie de Fibonacci sumando los dos anteriores
            a = b;            // Mueve b a a, porque en la siguiente iteración a debe tomar el valor que tenía b.
            b = next;         // Asigna a b el nuevo número que calculamos (next), preparándose para la siguiente suma.
        }
    }
    cout << endl;
    return 0;
}