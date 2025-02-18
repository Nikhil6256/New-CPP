#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        int count=0; cin>>n>>x;
        for(int i=1;i<=n;i++){
            int age;
            cin>>age;
            if(age>=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
