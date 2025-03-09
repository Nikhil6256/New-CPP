#include<bits/stdc++.h>
using namespace std;
void second(int arr[],int n){
    if(n==0 || n==1)
    cout<<"-1"<<" "<<"-1"<<endl;
int small=INT_MAX;  int sec_small= INT_MIN;
int large= INT_MIN; int sec_large= INT_MIN;
for(int i=0;i<n;i++){
    small=min(small,arr[i]);
    large=max(large,arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>sec_small && arr[i] !=small){
        sec_small=arr[i];
    }
    if(arr[i]>sec_large && arr[i]!=large){
        sec_large=arr[i];
    }
}
cout<<"Second largest element in an array is "<<sec_large<<endl;
cout<<"Second smallest element in an array is "<<sec_small<<endl;
}
int main()
{
  int arr[]={1,5,2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  second(arr,n);
    return 0;
}