#include<bits/stdc++.h>
using namespace std;
int second_largest(int arr[],int n){
    if (n < 2) return -1;
int largest = arr[0];
int slargest = INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    else if(arr[i] != largest && arr[i]>slargest){
        slargest = arr[i];
    }
}
return slargest;
}
int second_smallest(int arr[], int n){
    if (n < 2) return -1;
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]<ssmall && arr[i] != small){
            ssmall=arr[i];
        }
    }
    return ssmall;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    cout<<"Second largest element is: "<<second_largest(arr,n)<<endl;
    cout<<"Second largest element is: "<<second_smallest(arr,n)<<endl;
}