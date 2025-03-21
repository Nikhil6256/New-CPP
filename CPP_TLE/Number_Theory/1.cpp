#include<iostream>
using namespace std;
#define endl '\n'
bool prime(int n){
    // if(n<=1)
    // return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return n>1;     //if n>1: return true
                    //if n<=1: return false
}
int main()
{
    int n;
    cin>>n;
    // if(prime(n)){
    //     cout<<"YES\n";
    // }
    // else{
    //     cout<<"NO\n";
    // }
    cout<<prime(n);
    return 0;
}