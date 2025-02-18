#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        // for(int i=1;i<=tc;i++){
       if((a>b && a<c) || (a>c && a<b)){
        cout<<a;
       }
       else if((b>a && b<c) || (b>c && b<a)){
        cout<<b;
       }
       else{
        cout<<c;
       }
    }
}
