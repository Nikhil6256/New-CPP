#include<iostream>
using namespace std;
//Find smallest element in an rotated sorted array

//Check which side is sorted either left or right.
    //Pick the first element of the sorted side and store them in another variable and remove all the sorted side
    //Now focus on unsorted array
    //repeat
int pickElement(int arr[], int n){
    int left =0,right=n-1;
    int ans = INT_MAX;
    while(left<=right){
        int mid=left+(right-left)/2;

        //Method 1

        if(arr[left]<=arr[right]){
            ans=min(ans,arr[left]);
            break;
        }

        //Method 2

        if(arr[mid]>=arr[left]){
            ans=min(ans,arr[left]);
            left=mid+1;
        }
        else{
            ans=min(ans,arr[mid]);
            right=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=pickElement(arr,n);
    cout<<m;
    return 0;
}