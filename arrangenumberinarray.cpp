#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,t,i,j,k;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        i=0;
        j=n-1;
        k=1;
        while(i<=j)
        {
            if(i!=j){
            a[i++]=k++;
            a[j--]=k++;}
            else
            {
                a[i]=k;
                break;
            }
        }    
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        t--;
    }

}