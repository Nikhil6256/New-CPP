#include<iostream>
using namespace std;
int main()
{
  int a,b;
  char c;
  cin>>a>>c>>b;
  bool ans;
  if(c=='>'){
    if(a>b){
        ans = true;
    }
    else
    ans = false;
  }

  else if(c=='<'){
    if(a<b){
        ans = true;
    }
    else 
    ans = false;
  }

  else if(c=='='){
    if(a==b){
        ans = true;
    }
    else
    ans = false;
  }
  
    if(ans){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
  
    return 0;
}