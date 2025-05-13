/*Calificación en Letras
Solicita una calificación entre 0 y 100 y muestra la equivalencia en letras (A, B, C, D, E, F).*/

#include <iostream>
using namespace std;

int main()
{
    int nota;
    char Letra;

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
            Letra = 'A';
        }
        else if (nota < 90 && nota >= 85)
        {
            Letra = 'B';
        }
        else if (nota < 85 && nota >= 80)
        {
            Letra = 'C';
        }
        else if (nota < 80 && nota >= 70)
        {
            Letra = 'D';
        }
        else if (nota < 70 && nota >= 69)
        {
            Letra = 'E';
        }
        else
        {
            Letra = 'F';
        }
        switch (Letra)
        {
        case 'A':
            cout << "Tu nota es: A\n";
            cout << "Excelente trabajo! Tu esfuerzo y dedicacion estan dando frutos.Sigue asi!\n";
            break;
        case 'B':
            cout << "Tu nota es: B\n";
            cout << "Muy bien! Estas muy cerca de la excelencia.Un poco mas de esfuerzo y lo lograras.\n ";
            break;
        case 'C':
            cout << "Tu nota es: C\n";
            cout << "Buen trabajo! Sigue aprendiendo y mejorando cada dia.\n";
            break;
        case 'D':
            cout << "Tu nota es: D\n";
            cout << "No te rindas! Cada desafio es una oportunidad para crecer.\n";
            break;
        case 'E':
            cout << "Tu nota es: E\n";
            cout << "Animo! Cada paso que das te acerca a tus metas. Sigue intentandolo.\n";
            break;
        default:
            cout << "Tu nota es: F\n";
            cout << "No te preocupes, Intentalo de nuevo con mas fuerza !\n ";
            break;
        }
    }

    return 0;
}
