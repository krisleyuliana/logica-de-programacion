#include <iostream>

using namespace std;

int main() 
{
    int num1, num2;

    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " es el mayor" << endl;
    } else if (num2 > num1) {
        cout << num2 << " es el mayor" << endl;
    } else {
        cout << "Los dos numeros son iguales" << endl;
    }
    return 0;
}