/*Menú de Opciones
Crea un menú interactivo con 3 opciones y una opción para salir.*/

#include <iostream>
using namespace std;

int main()
{
    int option;

    // menu de opciones
    cout << "---------Menu----------\n";
    cout << "|1. Sompresa 1         |\n";
    cout << "|2. Sompresa 2         |\n";
    cout << "|3. Sompresa 3         |\n";
    cout << "|4. Salir              |\n";
    cout << "|----------------------|\n";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << " tralalero tralala ";
        break;
    case 2:
        cout << "ballerina capuchina";
        break;
    case 3:
        cout << "patin patan";
        break;
    case 4:
        cout << "Decidio salir";
        break;
    default:
        cout << "Las opcion ingresada no es valida";
        break;
    }

    return 0;
}