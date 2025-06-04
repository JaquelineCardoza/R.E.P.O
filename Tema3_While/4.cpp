/*Menú Interactivo
Crea un menú que se repita hasta que el usuario elija la opción de salir.*/

#include <iostream>
using namespace std;

int main()
{
    int menu;
    // menu de opciones
    do
    {
        /* code */
        cout << "---------Menu----------\n";
        cout << "|1. Sompresa 1         |\n";
        cout << "|2. Sompresa 2         |\n";
        cout << "|3. Sompresa 3         |\n";
        cout << "|4. Salir              |\n";
        cout << "|----------------------|\n";
        cin >> menu;
        if (menu < 0 || menu > 4)
        {
            cout << "Datos no validos vuelve a ingresaruna opcion \n";
        }
        else if (menu >= 1 && menu < 4)
        {
            cout << "Regresaste al menu \n";
        }
    } while (menu != 4);
    cout << "Has decidido salir \n";

    return 0;
}