/*Descuento en Tienda
Pide el monto de una compra y aplica un 10% de descuento si el monto es mayor a $100.*/

#include <iostream>
using namespace std;

int main()
{
    int mon;
    double total;                                        // variable para el monto
    cout << "Enter the amount of your purchase" << endl; // pedimos que ingrese el monto
    cin >> mon;
    
    if (mon <= 0)
    {
        cout << "The amount entered is not valid" << endl;
    }
    else if (mon <= 100)
    {
        cout << "You do not apply for the 10 percent discount" << endl;
    }
    else
    {
        // si es mayor a 100 se aplica 10% de descuento
        total = mon * 0.1;
        double totalDes = mon - total;
        cout << "You have 10 percent discount, your total amount is: $" << totalDes << endl; // mostrando el monto total sin los descuntos
    }
    return 0;
}