#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool prime = 1;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        prime=0;
        break;
    }
    // prime=0; 
    // cout<<"YES";

  }
  if(prime){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    return 0;
}