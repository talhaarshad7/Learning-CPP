#include<iostream>
using namespace std;
int main()
{
    int n,c,t=1,s=0;
    cin>>n;
    while(n!=0)
    {
        c=n%10;
        s=s+c*t;
        t=t*2;
        n=n/10;
    }
    cout<<s;
}