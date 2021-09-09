#include<iostream>
using namespace std;

int main()
{
    int x=1,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        while((3*x+2)%4==0)
        x++;
        cout<<(3*x+2)<<" ";
        x++;

    }
}