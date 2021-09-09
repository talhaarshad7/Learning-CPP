#include<iostream>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    if(c==1)
    {
        int s=0;
        for(int i=1;i<=n;i++)
        s=s+i;
        cout<<s;
    }
    else 
    {
        long p=1;
        for(int i=1;i<=n;i++)
        p=p*i;
        cout<<p;
    }
}