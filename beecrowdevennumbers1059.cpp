#include <iostream>
using namespace std;

int main()
{
    int numero = 1;

    while (numero <= 100) {
        if (numero % 2 == 0) {
            cout << numero << endl;
        }

        numero++;
    }
    return 0;
}