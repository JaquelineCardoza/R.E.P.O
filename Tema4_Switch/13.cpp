/*Zodíaco según el Mes
Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.
Aries: 20 de marzo . ♈ Aries
Tauro: 20 de abril . ♉ Taurus
Géminis: 21 de mayo . ♊ Gemini
Cáncer: 21 de junio . ♋ Cancer
Leo: del 22 de julio . ♌ Leo
Virgo: 22 de agosto . ♍ Virgo
Libra: 22 de septiembre.♎ Libra
Escorpio: 23 de octubre. ♏ Scorpius
Sagitario: 23 de noviembre .♐ Sgaittarius
Capricornio: 22 de diciembre. ♑ Capricorn
Acuario: 20 de enero. ♒ Aquarius
Piscis: 20 de febrero . ♓ Pisces
*/

#include <iostream>
using namespace std;

int main()
{
    int mes;

    cout << "Ingrese su mes de nacimiento (1-12): ";
    cin >> mes;

    switch (mes) // Cada signo zodiacal cambia alrededor del día 20 de cada mes, por eso dos posibles opciones de signos
    {
    case 1:
        cout << "Tu signo puede ser Capricornio♑ o Acuario♒." << endl;
        break;
    case 2:
        cout << "Tu signo puede ser Acuario♒ o Piscis♓." << endl;
        break;
    case 3:
        cout << "Tu signo puede ser Piscis♓ o Aries♈." << endl;
        break;
    case 4:
        cout << "Tu signo puede ser Aries♈ o Tauro♉." << endl;
        break;
    case 5:
        cout << "Tu signo puede ser Tauro♉ o Géminis♊." << endl;
        break;
    case 6:
        cout << "Tu signo puede ser Géminis♊ o Cáncer♋." << endl;
        break;
    case 7:
        cout << "Tu signo puede ser Cáncer♋ o Leo.♌" << endl;
        break;
    case 8:
        cout << "Tu signo puede ser Leo♌ o Virgo♍." << endl;
        break;
    case 9:
        cout << "Tu signo puede ser Virgo♍ o Libra.♎" << endl;
        break;
    case 10:
        cout << "Tu signo puede ser Libra♎ o Escorpio♏." << endl;
        break;
    case 11:
        cout << "Tu signo puede ser Escorpio♏ o Sagitario♐." << endl;
        break;
    case 12:
        cout << "Tu signo puede ser Sagitario♐ o Capricornio♑." << endl;
        break;
    default:
        cout << "Mes inválido. Por favor ingrese un número del 1 al 12." << endl;
        break;
    }

    return 0;
}