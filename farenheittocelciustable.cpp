#include<iostream>
using namespace std;

int main()
{
    int s,e,w;
    cin>>s>>e>>w;
    while(s<=e)
    {
        int c=(5.0/9)*(s-32);
        cout<<c;
        s=s+w;
    }
}