#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  for(int i=min(a,b);i>=1;i--){
    if(a%i==0 && b%i==0){
      cout<<i<<endl;
      break;
    }
  }
    return 0;
}