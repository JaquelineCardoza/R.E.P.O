/*Beca para Estudiantes
Un estudiante recibe beca si su promedio es mayor o igual a 85 y tiene menos de 3 faltas.*/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    int promedio, falta;
    cout << "Ingresa tu promedio de notas entre 0 a 100: \n";
    cin >> promedio;
    cout << "Ingresa cuantas faltas tienes: \n";
    cin >> falta;

    if (promedio >= 85 && falta < 3 && promedio < 0 && promedio <= 100)
    {
        cout << "Felicidades tienes beca\n";
    }
    else
    {
        cout << "Lo sentimos no puedes obtar por una beca, o los datos ingresados son incorrectos\n";
    }
    return 0;
}