#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, s;
    cout <<"Enter sides of triangle ";
    cin>>a>>b>>c;
    s=(a+b+c)/3;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle using heron "<<area;
    return 0;


}