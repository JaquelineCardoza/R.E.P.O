/*Sistema de Calificación de Conducción
Un programa debe calificar el estado de un conductor según su edad, número de infracciones y años de experiencia.*/
#include <iostream>
using namespace std;

int main()
{
    int edad, infracciones, experiencia;

    //datos
    cout << "Ingrese la edad del conductor: ";
    cin >> edad;

    cout << "Ingrese el número de infracciones: ";
    cin >> infracciones;

    cout << "Ingrese los años de experiencia: ";
    cin >> experiencia;

    // Evaluación del conductor
    if (edad < 18)
    {
        cout << "No puede conducir legalmente.\n";
    }
    else if (infracciones >= 5)
    {
        cout << "Conductor riesgoso.\n";
    }
    else if (experiencia >= 10 && infracciones == 0)
    {
        cout << "Conductor excelente.\n";
    }
    else if (experiencia >= 5 && infracciones <= 1)
    {
        cout << "Conductor responsable.\n";
    }
    else if (experiencia < 2 && infracciones <= 2)
    {
        cout << "Conductor novato.\n";
    }
    else
    {
        cout << "Conductor promedio.\n";
    }

    return 0;
}
