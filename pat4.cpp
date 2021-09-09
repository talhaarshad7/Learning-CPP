#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=n-i;
        while(j>0)
        {
            cout<<" ";
            j--;
        }
        k=2*i-1;
        j=1;
        while(j<=k)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
}