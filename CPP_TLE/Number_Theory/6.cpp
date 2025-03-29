#include<iostream>
using namespace std;
const int MOD = 1e9 + 7;
int power(int a,int b){
    if(b==0){
        return 1;
        a %= MOD;       //Nothng Change in modulo 
    }
    int half_power = power(a,b/2);
    if(b%2==0){
        return half_power * half_power % MOD;
    }
    else{
        return half_power * half_power % MOD * a % MOD;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}