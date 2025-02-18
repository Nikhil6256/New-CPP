#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int reverse=0;
  int original = n;
  while(n!=0){
    int lastdigit = n%10;
    reverse=(reverse*10)+lastdigit;
    n=n/10;
  }
  cout<<reverse<<endl;
  if(reverse == original){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
    return 0;
}