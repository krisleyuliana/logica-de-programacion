#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num1, num2, suma;

    cout << "Ingrese dos numeros de 2 digitos: ";
    cin >> num1 >> num2;

    if (abs(num1) >= 10 && abs(num1) <= 99 &&
        abs(num2) >= 10 && abs(num2) <= 99) {

        suma = num1 + num2;

        if (suma % 2 == 0) {
            cout << "La suma es par" << endl;
        } else {
            cout << "La suma no es par" << endl;
        }
    } else {
        cout << "Alguno de los numeros no es de 2 digitos" << endl;
    }
    return 0;
}