#include<iostream>
using namespace std;

int main()
{
    int d=2,n;
    bool divided=false;
    cout<<"Enter number to check whether it is prime or not: ";
    cin>>n;
    while (d<n)
    {
        if(n%d==0)
        {
            divided=true;
            cout<<"Not prime";
            break;
        }
        d++;
    }
    if(!divided)
    cout<<"Prime";
}