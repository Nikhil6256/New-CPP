#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    int n;
    cin>>n;
    int sum=0;
    if(n==0)
    cout<<"\nSum = 0";
    else{
        while(n>0){
            cout<<n%10<<" ";
            int num1 = n%10;
            sum=sum+num1;
            n=n/10;
        }
        cout<<endl<<"Sum = "<<sum;
    }
    cout<<endl;
  }
    return 0;
}