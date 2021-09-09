#include<iostream>
using namespace std;
void del(char s[],int p)
{
    for(int i=p;s[i]!='\0';i++)
    s[i]=s[i+1];
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        char s[1000];
        cin>>s;
        for(int i=1;s[i]!='\0';i++)
        {
            while(s[i-1]==s[i])
            del(s,i);
        }
        cout<<s;
    }
}