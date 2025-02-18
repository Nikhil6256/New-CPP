#include<iostream>
using namespace std;
int main()
{ 
  int a,b;
  while(true){
  cin>>a>>b;
  if(a<=0 || b<=0)
  break;
  int sum=0;
  if(a>b)
  swap(a,b);
  for(int i=a;i<=b;i++){
      cout<<i<<" ";
      sum += i;
  }
  cout<<"sum ="<<sum<<endl;
}
    return 0;

}
