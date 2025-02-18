#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
  int n,k;
        cin>>n>>k;
    int min_slice = n*10;    
    int max_slice = n*12;
    if(k>=min_slice && k<=max_slice){
        cout<<"YES\n";
    }    else{
    cout<<"NO\n";
    }
    }
    return 0;
}