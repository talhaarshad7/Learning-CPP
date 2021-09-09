#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[1000000],x,a;
    cin>>c>>x>>a;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]==x)
        c[i]=a;
    }
    cout<<c;
}