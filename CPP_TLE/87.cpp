#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
    int product=1;
    int factorial(int p){
        for(int i=1;i<=p;i++){
            product *= i;
        }
        return product;
    }
int main()
{
  int n,m;
  cin>>n>>m;
    if(prime(n)){
        cout<<n<<" is a prime number\n";
        }else{
        cout<<n<<" is not a prime number\n";
        }
    if(prime(m)){
    cout<<m<<" is a prime number\n";
    }else{
    cout<<m<<" is not a prime number\n";
    }
  cout<<factorial(n)<<endl;
  cout<<factorial(m)<<endl;
}