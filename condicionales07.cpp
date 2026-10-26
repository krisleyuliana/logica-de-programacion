#include <iostream>
using namespace std;

int main() 
{
    int num, n;

    cout << "Ingrese un numero de 2 digitos: ";
    cin >> num;

    if (num <= -10 && num >= -99) {
        n = -num;

        if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {
            cout << "Es negativo y su valor absoluto es primo" << endl;
        } else {
            cout << "Es negativo pero su valor absoluto no es primo" << endl;
        }
    } else {
        cout << "No es un numero negativo de 2 digitos" << endl;
    }
    return 0;
}