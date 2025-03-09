//Second largest element in an array this approach will work only if no duplicates are present
#include<bits/stdc++.h>
using namespace std;
void second(int arr[],int n){
    if(n==0 || n==1){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
        sort(arr,arr+n);
        int sec_lar = arr[n-2];
        int sec_sma = arr[1];
        cout<<"Second largest element is "<<sec_lar<<endl;
        cout<<"Second smallest element is "<<sec_sma<<endl;
    
}
int main()
{
  int arr[]={1,5,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    second(arr,n);
    return 0;
}