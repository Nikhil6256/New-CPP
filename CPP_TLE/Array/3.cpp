//Second largest element in an array
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selection_sort(arr,n);
  int second_largest;
  int largest=arr[n-1];
  for(int i=n-2;i>=0;i--){
    if(arr[i]!=largest){
        second_largest=arr[i];
        break;
    }
  }
  cout<<second_largest;
    return 0;
}