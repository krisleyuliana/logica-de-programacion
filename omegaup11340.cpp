#include <iostream>
using namespace std;
int main()
{
    int edad;
    cin>>edad;
    if (edad>=0 && edad<=3)
    {
        cout<<"BEBE"<<endl;
    }
    else if (edad>=4 && edad<=14)
    {
        cout<<"NINO"<<endl;
    }
    else if (edad>=15 && edad<=25)
    {
        cout<<"JOVEN"<<endl;
    }
    else if (edad>=26 && edad<=65)
    {
        cout<<"ADULTO"<<endl;
    }
    else if (edad>=65)
    {
        cout<<"ADULTO 3RA "<<endl;
    }
    return 0;
}