/*Verificación de Usuario y Contraseña
Simula la verificación de un usuario y contraseña predefinidos.*/
#include <iostream>
using namespace std;

int main()
{
    // variables predefinidas del usuario
    char name = '1';     // Solo acepta un caracter, supongamos que en una base de datos el 1 es Don Chepe
    char password = '8'; // la contraseña de don Chepe es 8
    // variables a verificar
    char name1, pass;
    cout << "Ingresa su nombre de usuario\n";
    cin >> name1;
    cout << "Ingresa su contraseña\n";
    cin >> pass;

    if (pass == password && name1 == name)
    {
        cout << "Datos ingresados correctamento, bienvenido Don Chepe\n";
    }
    else
    {
        cout << "El usuario o contraseña son incorrectos, por favor vuelve a intentar\n";
    }

    return 0;
}
