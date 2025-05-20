/*Clasificación de Películas por Edad
Pide la edad de un usuario y usa switch para recomendar una categoría de películas (G, PG, PG-13, R).
G = Para toda la familia
PG = Guía paternal sugerida
PG-13 =  Mayores de 13 años
R = Mayores de 17 años
*/
#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    cout << "Por favor ingresa tu edad, correspondiente al rango siguiente: \n";
    cout << "1. 0 a 10 anios\n";
    cout << "2. 11 a 13 anios\n";
    cout << "3. 13 a 17 anios\n";
    cout << "4. Más de 18 anios\n";
    cin >> age;

    switch (age)
    {
    case 1:
        cout << "Categoría de películas recomendada: G \n";
        cout << "-La Bella y la Bestia. \n";
        cout << "-El Libro de la Selva. \n";
        break;
    case 2:
        cout << "Categoría de películas recomendada: PG \n";
        cout << "-Ron Da Error. \n";
        cout << "-La Dama y el Vagabundo. \n";
        break;
    case 3:
        cout << "Categoría de películas recomendada: PG-13 \n";
        cout << "-Batman Begins, The Dark Knight, The Dark Knight Rises. \n";
        cout << "-Misión: Imposible Sentencia Mortal. \n";
        break;
    case 4:
        cout << "Categoría de películas recomendada: R \n";
        cout << "-Deadpool & Wolverine. \n";
        cout << "-Oppenheimer. \n";
        break;
    default:
        cout << "Opción no válida. Por favor, seleccione 1, 2, 3 o 4.\n";
        break;
    }

    return 0;
}