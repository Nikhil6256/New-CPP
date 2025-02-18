#include<iostream>
using namespace std;
bool digit (int a){
    while(a!=0){
        int ans = a%10;
        if(ans != 4 && ans != 7){
            return false;
        }
        a=a/10;
    }
    return true;
}
int main()
{
  int a,b;
  cin>>a>>b;
  bool found = false;for(int i=a;i<=b;i++){
    if(digit(i)){
        cout<<i<<" ";
        found = true;
    }
  }
  if(!found){
    cout<<"-1\n";
  }
    
    return 0;
}