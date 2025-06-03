/*Números Perfectos
Muestra los primeros N números perfectos (Un número perfecto es aquel cuya suma de divisores propios es igual a sí mismo).*/

#include <iostream>
using namespace std;

int main()
{
    int cantidad; // Cantidad de números perfectos a mostrar
    cout << "¿Cuántos números perfectos deseas ver? (máximo 4): ";
    cin >> cantidad;
    int encontrados = 0; // Contador de números perfectos encontrados

    // Se busca hasta encontrar la cantidad deseada de números perfectos
    for (int p = 2; encontrados < cantidad; p++)
    {
        long long potencia = 1;
        // Calcula 2^p
        for (int i = 0; i < p; i++)
            potencia *= 2;

        long long posibleMersenne = potencia - 1; // Calcula el número de Mersenne (2^p - 1)

        bool esPrimo = true;
        // Verifica si el número de Mersenne es primo
        for (long long i = 2; i <= posibleMersenne / 2; i++)
        {
            if (posibleMersenne % i == 0)
            {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo)
        {
            long long potenciaMenor = 1;
            // Calcula 2^(p-1)
            for (int i = 0; i < p - 1; i++)
                potenciaMenor *= 2;

            long long perfecto = potenciaMenor * posibleMersenne; // Fórmula de Euclides para números perfectos

            if (perfecto > 0) // Verifica que no haya desbordamiento
            {
                cout << "Número perfecto #" << (encontrados + 1) << ": " << perfecto << endl;
                encontrados++; // Incrementa el contador de números perfectos encontrados
            }
            else
            {
                break; // Si hay desbordamiento, termina el ciclo
            }
        }
    }
    return 0;
}
