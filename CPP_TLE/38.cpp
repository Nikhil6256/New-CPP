#include<bits/stdc++.h>
using namespace std;

    bool check(long long a,long long b,long long c,long long d){
        if(a+b+c==d)return true;
        if(a+b-c==d)return true;
        if(a+b*c==d)return true;
        if(a-b+c==d)return true;
        if(a-b-c==d)return true;
        if(a-b*c==d)return true;
        if(a*b+c==d)return true;
        if(a*b-c==d)return true;
        if(a*b*c==d)return true;

        return false;
    }
    int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(check(a,b,c,d)||
       check(a,c,b,d)|| 
       check(c,a,b,d)|| 
       check(b,a,c,d)|| 
       check(b,c,a,d)|| 
       check(c,b,a,d)) {
        cout<<"YES";
       }
       else{
        cout<<"NO";
       }
}
