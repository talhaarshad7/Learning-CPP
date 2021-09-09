#include<iostream>
using namespace std;
int main()
{
    bool isDec=true,result=true;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        if(i==0)
        {
            x=y;
            continue;
        }
        if(x<y)
        {
            if(isDec)
            {
                isDec=false;

            }
        }
        else
        {
            if(!isDec)
            result=false;
        }
        if(x==y)
        result=false;
        x=y;
    }
    if(result==true)
    cout<<"true";
    else
    cout<<"false";
}