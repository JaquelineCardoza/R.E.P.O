/*Clasificación de Vehículos
Solicita un tipo de vehículo (Coche, Moto, Bicicleta, etc.) e imprime una descripción.*/

#include <iostream>
using namespace std;

int main()
{
    int vehiculo;
    cout << "Clasificación de Vehículos" << endl;
    cout << "Seleccione el tipo de vehículo:" << endl;
    cout << "1. Coche" << endl;
    cout << "2. Moto" << endl;
    cout << "3. Bicicleta" << endl;
    cin >> vehiculo;
    switch (vehiculo)
    {
    case 1:
        cout << "El coche es un vehículo de motor. 🚗🚗🚗" << endl;
        break;
    case 2:
        cout << "La moto es un vehículo de dos ruedas. 🏍️🏍️🏍️" << endl;
    case 3:
        cout << "La bicicleta es un vehículo de dos ruedas." << endl;
        break;
    default:
        cout << "Tipo de vehículo no reconocido. 🚲🚲🚲" << endl;
        break;
    }

    return 0;
}