#include <iostream>
using namespace std;
int main()
{
    int a=7, b=3;

    int c=a*2+b%2;
    int d=a+b*3-c/2;
    int e=c%3+a/2;

    cout<<c<<" "<<d<<" "<<e<<endl;

    return 0;
}