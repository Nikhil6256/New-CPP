#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }
    cout<<sum<<" "<<'\n';
    return 0;
}