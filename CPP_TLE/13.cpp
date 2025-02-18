#include<iostream>
using namespace std;
int main()
{
  int w;
  cin>>w;
  if(w%2==0 && w>2){
    cout<<"YES\n";
  for(int i=0;i<=w;i+=2){
    cout<<i<<" "<<w-i<<endl;
  }
  }
    return 0;
}