#include <iostream>
using namespace std;

int main()
{
    int numero_secreto = 27;    // Número fijo a adivinar
    int intento;                // Variable para almacenar el intento del usuario
    int intentos_restantes = 5; // Número de intentos permitidos
    bool adivinado = false;     // Bandera para saber si se adivinó el número

    cout << "Adivina el numero (entre 1 y 50). Tienes 5 intentos.\n";

    // Bucle principal: mientras queden intentos y no se haya adivinado
    while (intentos_restantes > 0 && !adivinado)
    {
        cout << "Intento #" << (6 - intentos_restantes) << ": ";
        cin >> intento; // Leer intento del usuario

        if (intento == numero_secreto)
        {
            cout << "¡Felicidades! Adivinaste el numero.\n";
            adivinado = true; // Se adivinó el número
        }
        else if (intento < numero_secreto)
        {
            cout << "El numero es mayor.\n"; // El número secreto es mayor
        }
        else
        {
            cout << "El numero es menor.\n"; // El número secreto es menor
        }
        intentos_restantes--; // Reducir el número de intentos restantes
    }

    // Si no se adivinó, mostrar el número secreto
    if (!adivinado)
    {
        cout << "Lo siento, se acabaron los intentos. El numero era: " << numero_secreto << "\n";
    }

    return 0;
}
