/*Asignación de Grupos en una Universidad
Pide la inicial del apellido de un estudiante y usa switch para asignarlo a un grupo (A-M = Grupo 1, N-Z = Grupo 2).*/

#include <iostream>
using namespace std;

int main()
{
    char inicial;

    cout << "Ingrese la inicial del apellido (mayúscula): ";
    cin >> inicial;

    switch (inicial)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
        cout << "Asignado al Grupo 1\n";
        break;
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        cout << "Asignado al Grupo 2\n";
        break;
    default:
        cout << "Inicial no válida. Use mayúsculas.\n";
    }

    return 0;
}
