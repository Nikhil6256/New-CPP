#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool prime=1;
    int arr[n];
    int i;
    for(i=2;i<n;i++){
        if(n%arr[i]==0){
        prime=0;
        break;}
        else{
            prime=1;
        }
   }
    if(prime==0){
        cout<<arr[i];
    }
    
    return 0;
}