#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    int sum=0;
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(b,a);
    }
    for(int i = a+1;i<b;i++){
        if(i%2 != 0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
  }
    return 0;
}