/*11. **Promedio de Notas de un Estudiante**
    Define una estructura `Estudiante` con nombre y un arreglo de 5 calificaciones. Calcula y muestra el promedio de cada estudiante.*/

#include <iostream>
#include <fstream>
using namespace std;
// Definición de la estructura
struct Estudiante
{
    string nombre;
    float calificaciones[5];
};
void promedioNotas(Estudiante e)
{
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += e.calificaciones[i];
    }
    float promedio = suma / 5;
    cout << "Promedio de " << e.nombre << ": " << promedio << endl;
}


int main()
{
    Estudiante e;
    // Solicitar datos
    cout << "Ingrese el nombre del estudiante: \n";
    cin >> e.nombre;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese nota " << (i + 1) << ": ";
        cin >> e.calificaciones[i];
    }
    promedioNotas(e);
    return 0;
}