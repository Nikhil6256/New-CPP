//Check if an array is sorted
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=isSorted(arr,n);
  if(ans) cout<<"True\n";
  else cout<<"False\n";
    return 0;
}