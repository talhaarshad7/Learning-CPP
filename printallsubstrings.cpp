#include<iostream>
#include<cstring>
using namespace std;
void print(char c[],int p)
{
    int l=strlen(c);
    for(int i=p;i<l;i++)
    {
    for(int j=p;j<=i;j++)
    {
        cout<<c[j];
    }
    cout<<endl;
    }
}
int main()
{
    char c[1000000];
    cin>>c;
    cout<<"---------"<<endl;
    for(int i=0;i<strlen(c);i++)
    print(c,i);
}