/*Tipo de Triángulo
Solicita tres lados de un triángulo y usa switch para determinar si es equilátero, isósceles o escaleno.*/

#include <iostream>
using namespace std;

int main()
{
    // lados
    int lado1, lado2, lado3, tipoTriangulo;
    cout << "Introduce el primer lado:\n ";
    cin >> lado1;
    cout << "Introduce el segundo lado:\n ";
    cin >> lado2;
    cout << "Introduce el tercer lado:\n ";
    cin >> lado3;

    // verificamos que los datos sean positivos
    if (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {
        if (lado1 == lado2 && lado1 == lado3)
        {
            tipoTriangulo = 1;
        }
        // verifico si dos lados son iguales
        else if ((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1) || (lado3 == lado1 && lado3 != lado2))
        {
            tipoTriangulo = 2;
        }
        else
        {
            tipoTriangulo = 3;
        }
        switch (tipoTriangulo)
        {
        case 1:
            cout << "Es un triangulo equilatero \n ";
            break;
        case 2:
            cout << "Es un triangulo isosceles \n ";
            break;
        default:
            cout << "Es un triangulo escaleno \n ";
            break;
        }
    }
    else
    {
        cout << "Datos ingresados no soncorrectos \n ";
    }

    return 0;
}