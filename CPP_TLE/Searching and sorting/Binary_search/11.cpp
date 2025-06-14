#include<iostream>
using namespace std;
    int SingleElement(int arr[],int n){
        int left=1,right=n-2;
        if(n==1)    return arr[0];
        if(arr[0]!=arr[1])  return arr[0];
        if(arr[n-1]!=arr[n-2])  return arr[n-1];
        while(left<=right){
        int mid=(left+right)/2;
            if((arr[mid]!=arr[mid+1]) && arr[mid]!=arr[mid-1]){
                return arr[mid];
            }
            //remove left half(we are in left)
            if(((mid%2)!=0 && arr[mid-1]==arr[mid]) || ((mid%2)==0 && arr[mid+1]==arr[mid])){
                left=mid+1;
            }
            //remove right half
            else{
                right=mid-1;
            }
        }
        return -1;
    }

int main()
{
    
    return 0;
}