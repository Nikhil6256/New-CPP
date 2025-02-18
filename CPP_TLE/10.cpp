//sort in terms of ascending and given 
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;

  cin>>a>>b>>c;

  int x,y,z;
  x=a;y=b;z=c;

  if(a>b){
    swap(a,b);
  }
  if(b>c){
    swap(b,c);
    if(a>b){
      swap(a,b);
    }
  }
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<endl;
  cout<<x<<endl;
  cout<<y<<endl;
  cout<<z<<endl;
}