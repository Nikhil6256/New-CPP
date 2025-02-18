#include<iostream>
using namespace std;
int main()
{
  int x,y,gcd;
  cin>>x>>y;
  for(int i=1;i<=x;i++){
    if(x%i==0 && y%i==0){
        gcd = i;
    }
  }
  cout<<gcd;
    return 0;
}