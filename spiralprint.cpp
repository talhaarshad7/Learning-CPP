#include<iostream>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t>0)
    {
        int a[100][100];
        t--;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
        int rs=0,rf=m-1,cs=0,cf=n-1;
        while(rs<=rf&&cs<=cf)
        {
            for(int i=cs;i<=cf;i++)
            cout<<a[rs][i]<<" ";
            rs++;
            for(int i=rs;i<=rf;i++)
            cout<<a[i][cf]<<" ";
            cf--;
            for(int i=cf;i>=cs;i--)
            cout<<a[rf][i]<<" ";
            rf--;
            for(int i=rf;i>=rs;i--)
            cout<<a[i][cs]<<" ";
            cs++;
        }
    }
}