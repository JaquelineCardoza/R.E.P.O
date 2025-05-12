/*Clasificación de Triángulos
Pide tres lados de un triángulo e indica si es equilátero, isósceles o escaleno.*/
/*
El triángulo equilátero se caracteriza por tener todos sus lados y ángulos iguales.
El triángulo isósceles tiene al menos dos lados de igual longitud y, por lo tanto, dos ángulos iguales.
El triángulo escaleno tiene todos sus lados y ángulos de diferentes medidas.
*/
#include <iostream>
using namespace std;

int main()
{
    // lados
    int lado1, lado2, lado3;
    cout << "Introduce el primer lado:\n ";
    cin >> lado1;
    cout << "Introduce el segundo lado:\n ";
    cin >> lado2;
    cout << "Introduce el tercer lado:\n ";
    cin >> lado3;

    // verificamos que los datos sean positivos
    if (lado1 > 0 && lado2 > 0 && lado3)
    {
        if (lado1 == lado2 && lado1 == lado3)
        {
            cout << "Es un triangulo equilatero \n ";
        }
        // verifico si dos lados son iguales
        else if ((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1)|| (lado3 == lado1 && lado3 != lado2))
        {
            cout << "Es un triangulo isosceles \n ";
        }
        else
        {
            cout << "Es un triangulo escaleno \n ";
        }
    }
    else
    {
        cout << "Datos ingresados no soncorrectos \n ";
    }

    return 0;
}