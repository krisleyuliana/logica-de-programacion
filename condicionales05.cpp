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

        if (d1 % 2 == 0 && d2 % 2 == 0) {
            cout << "Los dos digitos son pares" << endl;
        } else {
            cout << "Los dos digitos no son pares" << endl;
        }
    } else {
        cout << "El numero no es de 2 digitos" << endl;
    }
    return 0;
}