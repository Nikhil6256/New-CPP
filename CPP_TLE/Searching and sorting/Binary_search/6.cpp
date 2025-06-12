#include<iostream>
using namespace std;
int first(int arr[],int n,int x){
    int left=0,right=n-1,firs=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
            firs=mid;
            right=mid-1;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else
        right=mid-1;
    }
    return firs;
}
    int last(int arr[],int n,int x){
    int left=0,right=n-1,las=-1;
        while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
            las=mid;
            left=mid+1;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else
        right=mid-1;
    }
    return las;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int m=first(arr,n,k);
    int p=last(arr,n,k);
    cout<<m<<" "<<p;
}