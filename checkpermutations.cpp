#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n;
        char s1[10000],s2[10000];
        cin>>n>>s1>>s2;
        char freq[256];
        for(int i=0;i<n;i++)
        {
            int pos=(int)s1[i];
            freq[pos]+=1;
        }
        for(int i=0;i<n;i++)
        {
            int pos=(int)s2[i];
            freq[pos]-=1;
        }
        int flag =0;
        for(int i=0;i<256;i++)
        {
            if(freq[i]>0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        cout<<"true";
        else
        cout<<"false";
    }
}