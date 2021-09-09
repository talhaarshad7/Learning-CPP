#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    char c='A',x;
    cin>>n;
    i=1;
    while(i<=n)
    {
        x=c+n-i;
        j=1;
        while(j<=i)
        {
            cout<<x++;
            j++;
        }
        cout<<endl;
        i++;

    }

}