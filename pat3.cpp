#include <iostream>
using namespace std;

int main()
{
    int i,j,k=1,n;
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