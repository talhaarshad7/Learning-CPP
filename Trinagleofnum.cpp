#include<iostream>
using namespace std;

int main()
{
    int n,i,j,x;
    cout<<"Enter N: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        cout<<' ';
        for(j=1;j<=i;j++){
            x=i+j-1;
        cout<<(x);
        }
        x=x-1;
        for(j=1;j<i;j++)
        {
            cout<<(x--);
        }
        cout<<endl;
    }
}