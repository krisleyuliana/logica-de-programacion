#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Nproducto, cantidad;
    double precio;

    cin >> Nproducto >> cantidad;

    switch (Nproducto) {
        case 1:
            precio = 4.00;
            break;

        case 2:
            precio = 4.50;
            break;

        case 3:
            precio = 5.00;
            break;

        case 4:
            precio = 2.00;
            break;

        case 5:
            precio = 1.50;
            break;
    }

    double total = precio * cantidad;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}
