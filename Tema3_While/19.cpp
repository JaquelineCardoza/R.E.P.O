/*
    El método de aproximaciones sucesivas es una técnica numérica simple para encontrar soluciones aproximadas a ecuaciones.
    En el contexto de este programa, se utiliza para calcular la raíz cuadrada de un número.
    Consiste en probar valores crecientes (aproximaciones) y verificar si su cuadrado se acerca al número dado.
    Se incrementa la aproximación en pequeños pasos hasta que el cuadrado de la aproximación supera el número.
    Es un método fácil de implementar, pero poco eficiente comparado con otros algoritmos como el método de Newton-Raphson.
*/
#include <iostream>
using namespace std;

int main()
{
    double numero, aproximacion = 0.0, incremento = 0.00001;

    cout << "Introduce un número: ";
    cin >> numero;

    if (numero < 0)
    {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
        return 1;
    }

    while (aproximacion * aproximacion <= numero)
    {
        aproximacion += incremento;
    }

    // Restar el último incremento para mayor precisión
    aproximacion -= incremento;

    cout << "La raíz cuadrada aproximada de " << numero << " es " << aproximacion << endl;

    return 0;
}
