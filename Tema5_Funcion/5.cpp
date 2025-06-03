/*Conversión de Temperatura
Escribe una función que convierta grados Celsius a Fahrenheit.*/

#include <iostream>
using namespace std;

// prototipo de  funcion
int cambiar(int c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    int cel;

    cout << "Ingrese un grado: \n";
    cin >> cel;

    cout << "Su grado en Fahrenheit es: " << cambiar(cel) << "°F" << endl;

    return 0;
}
//Variables locales solamente existe en una funcion donde se han declarado
//Variables globales se pueden utilizar en todo el codigo 

// .H creaccion de propias librerias 