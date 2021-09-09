#include<iostream>
#include<cstring>
using namespace std;
void rev(char c[],int p,int q)
{
    while(p<q)
    {
        char temp=c[p];
        c[p]=c[q];
        c[q]=temp;
        p++;
        q--;
    }
}
int main()
{
    char c[100000];
    cin.getline(c,100000);
    rev(c,0,strlen(c)-1);
    int p=0;
    for(int i=0;i<=strlen(c);i++)
    {
        if(c[i]==' '||c[i]=='\0')
        {
            rev(c,p,i-1);
            p=i+1;
        }
    }
    cout<<c;
}