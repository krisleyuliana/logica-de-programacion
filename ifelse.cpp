//Realizar un c++ que permita diferenciar 2 caracteres(Nota: Si a=A"Diferente",a=a"Igual")
#include <iostream>
using namespace std;

int main()
{
    char c1, c2;
    cin >> c1 >> c2;

    if(c1 == c2)
    {
        cout << "Iguales";
    }
    else
    {
        cout << "Diferente";
    }

    return 0;
}