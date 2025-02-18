#include<iostream>
using namespace std;
int main()
{
  long long int a,b,c;
  char d,e;
  cin>>a>>d>>b>>e>>c;
  if(d=='+'){
    if(a + b == c){
        cout<<"Yes";
    }
    else{
        cout<<a+b;
    }
  }

  if(d=='-'){
    if(a - b == c){
        cout<<"Yes";
    }
    else{
        cout<<a-b;
    }
  }

  if(d=='*'){
    if(a * b == c){
        cout<<"Yes";
    }
    else{
        cout<<a*b;
    }
  }

  
    return 0;
}