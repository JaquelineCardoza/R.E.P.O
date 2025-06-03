/*Verificación de Contraseña
El usuario debe ingresar una contraseña. Si es incorrecta, debe volver a intentarlo hasta que la ingrese correctamente.
*/

#include <iostream>
using namespace std;

int main()
{
    string password;
    string password2;

    // se guarda la contrasenia ingresada
    cout << "Ingrese su contrasenia" << endl;
    cin >> password;

    do
    {
        cout << "Ingrese de nuevo su contrasenia, para confirmar:" << endl;
        cin >> password2;

    } while (password != password2);
    cout << "La contrasenia ingresada es corrrecta 👍" << endl;

    return 0;
}