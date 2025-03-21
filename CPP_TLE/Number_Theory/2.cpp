#include<iostream>
using namespace std;
#define endl '\n'
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return n>1;    
}
int main()
{
    int n;
    cin>>n;
    if(prime(n)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}