//Realizar un programa en c++ que permita el ingreso de evento solo a personas mayores de edad y que tenga ticket VIP
#include <iostream>
using namespace std;

int main()
{
    int edad;
    int vip;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    cout << "¿Tiene ticket vip? (1=Si, 0=No): ";
    cin >> vip;

    if (edad >= 18 && vip == 1)
    {
        cout << "Ingreso permitido, bienvenido al evento VIP" << endl;
    }
    else
    {
        cout << "Ingreso denegado" << endl;
    }

    return 0;
}