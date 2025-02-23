#include<iostream>
using namespace std;
void Selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    Selection_sort(arr,n);

    return 0;
}