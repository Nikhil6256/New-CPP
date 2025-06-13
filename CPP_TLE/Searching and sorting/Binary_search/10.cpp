#include<bits/stdc++.h>
using namespace std;

    //Find out how many times the array is rotated
    //minimum element in an array, that index should equal to answer.

    int element(int arr[],int n){
        int left=0,right=n-1;
        int ans=INT_MAX;
        int index=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]>=arr[left]){
                if(arr[left]<ans){
                index=left;
                ans=arr[left];
                }
                left=mid+1;
            }
            else{
                right=mid-1;
                if(arr[mid]<ans){
                    index=mid;
                    ans=arr[mid];
                }
            }
        }
        return index;
    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=element(arr,n);
    cout<<m;
    return 0;
}