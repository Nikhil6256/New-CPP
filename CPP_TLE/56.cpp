#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    long long n;
    cin>>n;
    if(n==1){
        cout<<a<<" ";
    }
    else if(n==2){
        cout<<b<<" ";
    }
    else{                           //Jab terako nhi pta kya inititalize krna hai tab while loop le liya kr
        for(int i=3;i<=n;i++){
           c=a+b;
            a=b;
            b=c;
    }
    cout<<c;
    }
}