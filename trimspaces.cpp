#include<iostream>
#include<cstring>
using namespace std;
void del(char c[],int p)
{
    int i,l=strlen(c);
    for(i=p;i<l-1;i++)
    c[i]=c[i+1];
    c[i]='\0';
}
int main()
{
    char c[1000000];
    cin.getline(c,1000000);
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {
        if(c[i]==' ')
        del(c,i);
    }
    cout<<c;
}