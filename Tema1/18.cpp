/*Doble Verificación de Datos
Pide dos contraseñas y verifica si coinciden antes de continuar.*/

#include <iostream>
using namespace std;

int main()
{
    string password1, password2;

    cout << "Introduce la primera contraseña: \n";
    cin >> password1;

    cout << "Introduce la segunda contraseña: \n";
    cin >> password2;

    if (password1 == password2)
    {
        cout << "Las contraseñas coinciden. Puedes continuar.\n" ;
    }
    else
    {
        cout << "Las contraseñas no coinciden. Inténtalo de nuevo.\n";
    }

    return 0;
}