#include<iostream>
using namespace std;
int main()
{
int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<n/4<<endl;
        }
        else{
            cout<<((n+3)/4)<<endl;
        }
    }  
    return 0;
}