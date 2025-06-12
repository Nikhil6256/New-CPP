#include<iostream>
using namespace std;

int RotatedSortedArray(int arr[],int n, int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target)    return mid;
        //Left Sorted
        if(arr[mid]>arr[left]){
            if(target<=arr[mid] && target>=arr[left]){
                right=mid-1;
            }
            else
            left=mid+1;
        }
        //Right Sorted
        else{
            if(target>=arr[mid] && target<=arr[right]){
                left=mid+1;
            }
            else
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int m=RotatedSortedArray(arr,n,k);
    cout<<m;
    return 0;
}