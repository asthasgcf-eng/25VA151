#include <iostream>
using namespace std;
int main()
{
    int principal, time, rate, si;
    cout<<"Enter 3 values  ";
    cin>>principal>>time>>rate;
    si=(principal*time*rate)/100;
    cout<<"Simple interest "<<si;
    return 0;
}