#include<iostream>
using namespace std;

int main()
{
    int n,s=0;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        i++;
    }
    cout<<s;
}