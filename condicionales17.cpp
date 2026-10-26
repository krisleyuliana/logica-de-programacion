#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num, d1, d2, d3, mayor;

    cout << "Ingrese un numero de 3 digitos: ";
    cin >> num;

    num = abs(num);

    if (num >= 100 && num <= 999) {
        d1 = num / 100;
        d2 = (num / 10) % 10;
        d3 = num % 10;

        mayor = d1;

        if (d2 > mayor) {
            mayor = d2;
        }

        if (d3 > mayor) {
            mayor = d3;
        }

        if (d1 == mayor) {
            cout << "El mayor digito esta en la primera posicion" << endl;
        }

        if (d2 == mayor) {
            cout << "El mayor digito esta en la segunda posicion" << endl;
        }

        if (d3 == mayor) {
            cout << "El mayor digito esta en la tercera posicion" << endl;
        }
    } else {
        cout << "El numero no es de 3 digitos" << endl;
    }
    return 0;
}