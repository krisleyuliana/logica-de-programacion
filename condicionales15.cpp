#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num, d1, d2, d3, suma;

    cout << "Ingrese un numero de 3 digitos: ";
    cin >> num;

    num = abs(num);

    if (num >= 100 && num <= 999) {
        d1 = num / 100;
        d2 = (num / 10) % 10;
        d3 = num % 10;

        suma = d1 + d2 + d3;

        cout << "La suma de los digitos es: " << suma << endl;
    } else {
        cout << "El numero no es de 3 digitos" << endl;
    }
    return 0;
}