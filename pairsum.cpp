#include<iostream>
using namespace std;
int main()
{
    int a[1000],s,ps=0,n,t,i,j;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j])==s)
                ps++;
            }
        }
        cout<<ps<<endl;
        t--;
    }    
}