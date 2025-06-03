/*Serie de Números Alternados
Imprime la serie: 1, -2, 3, -4, 5, -6, ... hasta N.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0, inicio = 0;
    cout << "Introduce un numero: \n";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        cout << "Numeros: ";
        if (i % 2 == 0)
        {
            cout << ", " << i * -1;
        }
        else
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}