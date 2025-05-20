/*Cálculo de Impuestos
Solicita el salario de un trabajador y muestra el porcentaje de impuestos a pagar según su rango de ingresos.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // declaramos variables
    double Salary, Afp, Isss, Total, rent;
    int option;
    // solicitamos variable
    cout << "Enter your salary:\n";
    cin >> Salary;

    // menu de opciones
    cout << "------Menu-------\n";
    cout << "|1. ISSS        |\n";
    cout << "|2. Afp         |\n";
    cout << "|3. Renta       |\n";
    cout << "|4. Todos       |\n";
    cout << "|5. Salir       |\n";
    cout << "-----------------\n";
    cin >> option;

    switch (option)
    {
    case 1:
        if (Salary <= 472.99 && Salary > 0)
        {
            cout << "The discount does not apply\n";
        }
        else if (Salary > 472.99 && Salary < 1000)
        {
            Isss = (Salary * 0.03);
            cout << "The ISSS discount is: $ " << Isss << endl;
        }
        else
        {
            Isss = Salary - 30;
            cout << "The ISSS discount is: $ " << Isss << endl;
        }
        break;
    case 2:
        if (Salary <= 472.99 && Salary > 0)
        {
            cout << "The discount does not apply\n";
        }
        else
        {
            Afp = Salary * 0.0725;
            cout << "The AFP discount is: $ " << Afp << endl;
        }
        break;
    case 3:
        if (Salary <= 472.99 && Salary > 0)
        {
            cout << "The discount does not apply\n";
        }
        else if (Salary > 472.99 && Salary <= 895.24)
        {
            // variable para obtener afp y isss, las cuales le restan a salario y luego aplicamos el 10%
            Isss = (Salary * 0.03);
            Afp = Salary * 0.0725;
            rent = (Salary - (Afp + Isss)) * 0.1;
            cout << "The Rent discount is: $ " << rent << endl;
        }
        else if (Salary > 895.25 && Salary <= 2038.10)
        {
            if (Salary >= 1000) // comprobamos salario es mayor y igual a mil poder aplicar lo del isss
            {
                Isss = 30;
                Afp = Salary * 0.0725;
                rent = (Salary - (Isss + Afp)) * 0.2;
                cout << "The Rent discount is: $ " << rent << endl;
            }
            else
            {
                Isss = Salary * 0.03;
                Afp = Salary * 0.0725;
                rent = (Salary - (Afp + Isss)) * 0.2;
                cout << "The Rent discount is: $ " << rent << endl;
            }
        }
        else
        {
            Isss = 30;
            Afp = Salary * 0.0725;
            rent = (Salary - (Afp + Isss)) * 0.3;
            cout << "The Rent discount is: $ " << rent << endl;
        }
        break;
    case 4:
        if (Salary <= 472.99 && Salary > 0)
        {
            cout << "The discount does not apply\n";
        }
        else if (Salary > 472.99 && Salary <= 895.24)
        {
            // volvemos obtener los valores del isss  y renta
            Isss = (Salary * 0.03);
            Afp = Salary * 0.0725;
            rent = (Salary - (Afp + Isss)) * 0.1;
            Total = Salary - (Afp + Isss+ rent);
            double total = Afp + Isss + rent;
            cout << "The Salary discount is: $ " << Salary << endl;
            cout << "The salary less discount: $ " << Total << endl;
            cout << "The Isss discount is: $ " << Isss << endl;
            cout << "The Afp discount is: $ " << Afp << endl;
            cout << "The Rent discount is: $ " << rent << endl;
            cout << "The Total discount is: $ " << total << endl;
        }
        else if (Salary > 895.25 && Salary <= 2038.10)
        {
            if (Salary >= 1000) // comprobamos salario es mayor y igual a mil poder aplicar lo del isss
            {
                Isss = 30;
                Afp = Salary * 0.0725;
                rent = (Salary - (Isss + Afp)) * 0.2;
                Total = Salary - (Afp + Isss+ rent);
                double total = Afp + Isss + rent;
                cout << "The Salary discount is: $ " << Salary << endl;
                cout << "The salary less discount: $ " << Total << endl;
                cout << "The Isss discount is: $ " << Isss << endl;
                cout << "The Afp discount is: $ " << Afp << endl;
                cout << "The Rent discount is: $ " << rent << endl;
                cout << "The Total discount is: $ " << total << endl;
            }
            else
            {
                Isss = Salary * 0.03;
                Afp = Salary * 0.0725;
                rent = (Salary - (Afp + Isss)) * 0.2;
                Total = Salary - (Afp + Isss+ rent);
                double total = Afp + Isss + rent;
                cout << "The Salary discount is: $ " << Salary << endl;
                cout << "The Salary less discount: $ " << Total << endl;
                cout << "The Isss discount is: $ " << Isss << endl;
                cout << "The Afp discount is: $ " << Afp << endl;
                cout << "The Rent discount is: $ " << rent << endl;
                cout << "The total discount is: $ " << total << endl;
            }
          
        }
        else
        {
            Isss = 30;
            Afp = Salary * 0.0725;
            rent = (Salary - (Afp + Isss)) * 0.3;
            Total = Salary - (Afp + Isss);
            int total = Afp + Isss + rent;
            cout << "The Salary discount is: $ " << Salary << endl;
            cout << "The salary less discount: $ " << Total << endl;
            cout << "The Isss discount is: $ " << Isss << endl;
            cout << "The Afp discount is: $ " << Afp << endl;
            cout << "The Rent discount is: $ " << rent << endl;
            cout << "The Total discount is: $ " << total << endl;

        }
        break;
    default:
        cout << "Es la opcion salir";
        break;
    }

    return 0;
}