#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num2 > num1) {
        num1 = num2;
    }

    cout << "Ingrese el tercer numero: ";
    cin >> num2;

    if (num2 > num1) {
        num1 = num2;
    }

    cout << "El mayor es: " << num1 << endl;
    return 0;
}