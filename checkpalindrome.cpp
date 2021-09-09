#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[1000000];
    int i,j;
    cin>>c;
    char temp[1000000];
    strcpy(temp,c);
    i=0;
    j=strlen(c)-1;
    while(i<j)
    {
        int temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
    if(strcmp(c,temp)==0)
    cout<<"true";
    else 
    cout<<"false";

}