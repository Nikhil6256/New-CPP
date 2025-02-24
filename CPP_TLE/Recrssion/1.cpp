#include<iostream>
using namespace std;
void name(int i,int n){
    if(i>n)
    return;
    //else
    cout<<"Raj\n";
    name(i+1,n);
}
int main()
{
  int n;
  cin>>n;
  int i=1;
  name(i,n);
    return 0;
}