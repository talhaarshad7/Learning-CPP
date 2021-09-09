#include<iostream>
using namespace std;

int main()
{
 int n,d,s=0,t=1;
 cin>>n;
 while(n>1)
 {
     d=n%2;
     s=s+d*t;
     t=t*10;
     n=n/2;
 }
 if(n==1)
 s=s+d*t;
 cout<<s;
}