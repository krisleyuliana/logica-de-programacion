#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num, d1, d2;

    cout << "Ingrese un numero de 2 digitos: ";
    cin >> num;

    num = abs(num);

    if (num >= 10 && num <= 99) {
        d1 = num / 10;
        d2 = num % 10;

        if (d2 == 0) {
            cout << "Un digito es multiplo del otro" << endl;
        } else if (d1 % d2 == 0 || d2 % d1 == 0) {
            cout << "Un digito es multiplo del otro" << endl;
        } else {
            cout << "Ningun digito es multiplo del otro" << endl;
        }
    } else {
        cout << "El numero no es de 2 digitos" << endl;
    }
    return 0;
}