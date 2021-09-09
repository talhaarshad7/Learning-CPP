#include<iostream>
using namespace std;
int main()
{
    int n,x,t,i,a[1000000];
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>x;
        int j;
        for(j=0;j<x;j++)
        {
            int temp=a[0];
            for(i=0;i<n-1;i++)
                a[i]=a[i+1];
            a[n-1]=temp;
        }
        t--;
        for(i=0;i<n;i++)
        cout<<a[i];
    }
}