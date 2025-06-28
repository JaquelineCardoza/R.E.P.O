#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura
struct Habitacion
{
    int numero;
    string tipo;
    bool estado; // true = disponible, false = ocupada
};

// Declaración de variables globales
int cantidadHabitaciones;   // Número total de habitaciones
Habitacion hotel[100];      // Arreglo con capacidad máxima de 100 habitaciones

// Función para inicializar las habitaciones
void inicializarHabitaciones()
{
    cout << "¿Cuántas habitaciones desea registrar? ";
    cin >> cantidadHabitaciones;

    for (int i = 0; i < cantidadHabitaciones; i++)
    {
        cout << "\nHabitación #" << i + 1 << endl;
        cout << "Número de habitación: ";
        cin >> hotel[i].numero;

        cout << "Tipo de habitación (simple/doble/suite): ";
        cin >> hotel[i].tipo;

        cout << "¿Está disponible? (1 = sí, 0 = no): ";
        cin >> hotel[i].estado;
    }
}

// Función para mostrar habitaciones disponibles
void mostrarDisponibles()
{
    cout << "\nHabitaciones disponibles:\n";
    bool hayDisponibles = false;
    for (int i = 0; i < cantidadHabitaciones; i++)
    {
        if (hotel[i].estado == true)
        {
            cout << "Número: " << hotel[i].numero
                 << " | Tipo: " << hotel[i].tipo << endl;
            hayDisponibles = true;
        }
    }
    if (!hayDisponibles)
    {
        cout << "No hay habitaciones disponibles actualmente.\n";
    }
}

// Función para registrar una reserva
void registrarReserva()
{
    int numeroBuscado;
    cout << "\nIngrese el número de la habitación a reservar: ";
    cin >> numeroBuscado;

    bool encontrada = false;

    for (int i = 0; i < cantidadHabitaciones; i++)
    {
        if (hotel[i].numero == numeroBuscado)
        {
            encontrada = true;
            if (hotel[i].estado == true)
            {
                hotel[i].estado = false;
                cout << "¡Reserva realizada con éxito!\n";
            }
            else
            {
                cout << "Esa habitación ya está ocupada.\n";
            }
            break;
        }
    }

    if (!encontrada)
    {
        cout << "Habitación no encontrada.\n";
    }
}

// Menú principal
int main()
{
    int opcion;
    inicializarHabitaciones();

    do
    {
        cout << "\n--- MENÚ ---\n";
        cout << "1. Mostrar habitaciones disponibles\n";
        cout << "2. Registrar una reserva\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            mostrarDisponibles();
            break;
        case 2:
            registrarReserva();
            break;
        case 3:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 3);

    return 0;
}
