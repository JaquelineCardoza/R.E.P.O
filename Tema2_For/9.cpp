/*Números Divisibles por 3 y 5
Muestra todos los números del 1 al 100 que sean divisibles por 3 y por 5.*/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " es divisible por 3 y 5." << endl;
        }
    }
    return 0;
}