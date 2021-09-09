#include<iostream>
using namespace std;

int main()
{
    char ch=cin.get();
    int c=0,s=0,d=0;
    while(ch!='$')
    {
        if(ch==' ')
        s++;
        else if(ch>=97&&ch<=122)
        c++;
        else if(ch>=48&&ch<=57)
        d++;
        ch=cin.get();
    }
    cout<<c<<" "<<d<<" "<<s;
}