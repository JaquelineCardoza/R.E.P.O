#include <iostream>
using namespace std;
/*
Edad y Mayoría de Edad
Escribe un programa que pida la edad de una persona e indique si es mayor o menor de edad (18 años o más es mayor de edad).
*/
int main()
{
    // variables
    int age;
    cout << "Enter your age\n";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are of legal age";
    }
    else if (age < 18 && age > 0)
    {
        cout << "You are a minor";
    }
    else
    {
        cout << "The data entered is not valid";
    }
    return 0;
}
