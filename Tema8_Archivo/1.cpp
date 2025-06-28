/*Escribir en un Archivo
Crea un programa que solicite al usuario un mensaje y lo guarde en un archivo de texto llamado mensaje.txt.*/
#include <iostream>
#include <fstream> // Para ofstream e ifstream
#include <string>  // Para el tipo de dato string
using namespace std;

struct Mensaje
{
    string descrip;
};

int main()
{
    int n;
    Mensaje mensajes[100];
    // Solicitar al usuario la cantidad de mensajes a ingresar
    cout << "Ingrese el número de mensajes: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Ingrese el mensaje #" << i + 1 << ": ";
        cin >> mensajes[i].descrip;
    }
    // Crear y abrir el archivo de texto en modo de anexado (no borra los datos existentes)
    ofstream archivo("mensajes.txt", ios::app);
    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open())
    {
        // Escribir los datos de todas los mensajes en el archivo
        for (int i = 0; i < n; ++i)
        {
            archivo << mensajes[i].descrip << endl;
        }
        archivo.close();
        cout << "Datos guardados en el archivo mensajes.txt.\n";
    }
    else
    {
        cout << "No se pudo abrir el archivo para escribir.\n";
    }
    // Leer los datos desde el archivo
    ifstream archivoLectura("mensajes.txt");
    if (archivoLectura.is_open())
    {
        cout << "Contenido del archivo:\n";
        Mensaje p;
        while (archivoLectura >> p.descrip)
        {
            cout << "El mensajes es: " << p.descrip << endl;
        }
        archivoLectura.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo para leer.\n";
    }

    return 0;
}
