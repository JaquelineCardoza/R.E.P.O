/*Calificación Aprobatoria
Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).*/

#include <iostream>
using namespace std;

int main()
{
    double note;
    cout << "Please enter your note\n";
    cin >> note;

    if (note >= 60 && note <= 100)
    {
        cout << "you passed";
    }
    else if (note > 0 && note < 60)
    {
        cout << "you failed";
    }
    else
    {
        cout << "The data entered is incorrect.";
    }
    return 0;
}