#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[10][10],t,m,n,i,j,maxv=INT_MIN,sum=0,indexno=0;
    char index='r';
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>m>>n;
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=sum+a[i][j];
            }
            if(sum>maxv)
            {
                maxv=sum;
                indexno=i;
            }
            sum=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum=sum+a[j][i];
            }
            if(sum>maxv)
            {
                maxv=sum;
                index='c';
                indexno=i;
            }
            sum=0;
        }
        if(index=='r')
        cout<<"row "<<indexno<<" "<<maxv<<endl;
        else
        cout<<"column "<<indexno<<" "<<maxv<<endl;
    }
}