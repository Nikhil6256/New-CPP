#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    bool haseven = false;
    for(int i=2;i<=n;i+=2){
        cout<<i<<'\n';
        haseven=true;
    }
    if(!haseven){
        cout<<-1;
    }
}