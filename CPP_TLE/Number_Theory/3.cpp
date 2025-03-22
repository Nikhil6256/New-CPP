#include<iostream>
using namespace std;
void sieve(int n){
    bool prime[n+1];
    fill(prime,prime+n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i)
            prime[j]=false;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}