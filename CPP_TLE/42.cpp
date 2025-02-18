#include<iostream>
using namespace std;
int main()
{
    int n;
  int arr[n];
  bool ans;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i] == 1999){
        ans = 1;
    }
    else{
        ans = 0;
    }
  }
  if(ans=1){
    cout<<"Correct";
  }
  else{
    cout<<"Wrong\n";
  }
    return 0;
}