#include<iostream>
using namespace std;
int main()
{
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int tc;
        cin>>tc;
        while(tc--){
  int n;
  int product=1;
  cin>>n;
  for(int i=1;i<=n;i++){
    product *= i;
  }
  cout<<product<<endl;
}
}