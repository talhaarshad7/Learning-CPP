#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k=1;
    cout<<"Enter N: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<k++;
            j++;
        }
        i++;
        cout<<endl;
    }
}