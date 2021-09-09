#include<iostream>
using namespace std;
int main()
{
    int t,n,a[100000],temp,i,j;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                j++;
            }

        }
        
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        t--;

    }
}