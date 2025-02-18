//prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans;
    for(int i=2;i<n;i++){
        if(n%i==0){
            ans=0;
        }
        else{
            ans=1;
        }
    }
    if(ans){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}