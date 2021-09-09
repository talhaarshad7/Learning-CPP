#include<iostream>
using namespace std;
void rev(char c[],int s,int f)
{
    while(s<f)
    {
        int temp=c[s];
        c[s]=c[f];
        c[f]=temp;
        s++;
        f--;
    }
}
int main()
{
        char c[1000];
        cin.getline(c,1000);
        int i=0,p=0;
        while(c[i]!='\0')
        {
            if(c[i]==' ')
            {
                rev(c,p,i-1);
                p=i+1;
            }
            i++;
        }
        rev(c,p,i-1);
        cout<<c;
}