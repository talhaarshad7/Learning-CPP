#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[100000],i,l,m,n,t;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        l=INT_MIN;
        m=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(a[i]>l)
            {
                m=l;
                l=a[i];
            }
            else if(a[i]>m&&a[i]!=l)
            m=a[i];
        }
        cout<<m<<endl;
        t--;
    }
}