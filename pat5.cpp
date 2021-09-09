#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,j;
    char c='A',x;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            x=c+j-1;
            cout<<x;
            j++;
        }
        i++;
        c=c+1;
        cout<<endl;
    }
}