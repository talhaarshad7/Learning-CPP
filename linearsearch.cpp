#include<iostream>
using namespace std;
int search(int a[],int l,int x)
{
    for(int i=0;i<l;i++)
    {
        if(a[i]==x)
        return i;
    }
    return -1;
}
int main()
{
    int arr[100];
    int i,n,x;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        cin>>n;
        for(int k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        cin>>x;
        cout<<search(arr,n,x)<<endl;
    }
}