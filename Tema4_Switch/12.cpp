/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.*/
#include <iostream>
using namespace std;

int main()
{
    int star = 0;
    cout << "Por selecione cuantas estrellas:\n";
    cout << "1. ⭐️ \n";
    cout << "2. ⭐️⭐️\n";
    cout << "3. ⭐️⭐️⭐️\n";
    cout << "4. ⭐️⭐️⭐️⭐️\n";
    cout << "5. ⭐️⭐️⭐️⭐️⭐️\n";
    cin >> star;

    switch (star)
    {
    case 1:
        cout << "⭐️ \n";
        cout << "Muy mal desempeño. No coopera, muere mucho o no aporta al equipo. Da la impresión de que no conoce el juego o no tiene interés.\n";
        break;
    case 2:
        cout << "⭐️⭐️ \n";
        cout << "Le falta bastante. Suele distraerse y toma malas decisiones en momentos clave. Necesita trabajar en su juego y en escuchar al equipo\n";
        break;
    case 3:
        cout << "⭐️⭐️⭐️ \n";
        cout << "Jugador promedio. Tiene momentos buenos, pero le falta consistencia. Si mejora su comunicación y práctica, puede subir su nivel.\n";
        break;
    case 4:
        cout << "⭐️⭐️⭐️⭐️ \n";
        cout << "Muy buen jugador. Tiene gran habilidad y suele destacar, aunque a veces comete errores menores. Aun así, muy confiable.\n";
        break;
    case 5:
        cout << "⭐️⭐️⭐️⭐️⭐️ \n";
        cout << "Jugador excepcional. Siempre está concentrado, toma decisiones inteligentes y tiene una gran actitud en equipo. ¡MVP sin dudas\n";
        break;

    default:
        cout << "Opción no válida. Por favor, seleccione 1, 2, 3, 4 o 5.\n";
        break;
    }
    return 0;
}