/*Autenticación con Intentos
Simula un sistema de autenticación con un usuario y contraseña, permitiendo hasta 3 intentos.*/
#include <iostream>
using namespace std;

int main()
{
    int name = 1;
    int password = 2;
    int nom, pass;

    cout << "Ingrese su nombre\n";
    cin >> nom;
    cout << "Ingrese su contraseña\n";
    cin >> pass;

    if (pass == password && nom == name)
    {
        cout << "Datos correctos\n";
    }
    else if (pass != password || nom != name)
    {
        cout << "Datos incorrecto vuelve intertarlo (3 intentos)\n";
        cout << "Ingrese su nombre\n";
        cin >> nom;
        cout << "Ingrese su contraseña\n";
        cin >> pass;
        if (pass != password || nom != name)
        {

            cout << "Datos incorrecto vuelve intertarlo (2 intentos)\n";
            cout << "Ingrese su nombre\n";
            cin >> nom;
            cout << "Ingrese su contraseña\n";
            cin >> pass;
            if (pass != password || nom != name)
            {
                cout << "Datos incorrecto vuelve intertarlo  (1 intento)\n";
                cout << "Ingrese su nombre\n";
                cin >> nom;
                cout << "Ingrese su contraseña\n";
                cin >> pass;
                if (pass != password || nom != name)
                {
                    cout << "Ya te quedastes sin intentos \n";
                }
                else
                {
                    cout << "Datos correctos\n";
                }
            }
            else
            {
                cout << "Datos correctos\n";
            }
        }
        else
        {
            cout << "Datos correctos\n";
        }
    }

    return 0;
}