#include<iostream>
using namespace std;
int main()
{
  int a,n,y,m;
    cin>>n;
  y=n/365;
  a=n%365;
  m=a/30;
  a=a%30;
    cout<<y<<" years\n"<<m<<" months\n"<<a<<" days";
    return 0;
}   