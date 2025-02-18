#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx1 = max(max(a,b), max(c,d));
    int mx2;
    if(mx1==a){
      mx2=max(b,max(c,d));
    }
    else if(mx1==b){
      mx2=max(a,max(c,d));
    }else if(mx1==c){
      mx2=max(a,max(b,d));
    }else{
      mx2=max(b,max(c,a));
    }
  }
    return 0;
}