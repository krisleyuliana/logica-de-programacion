#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    
    if (num % 10 == 4) {
        cout << "El numero termina en 4" << endl;
    } else {
        cout << "El numero no termina en 4" << endl;
    }
    return 0;
}