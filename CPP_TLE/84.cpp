#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        int a,b;
        cin>>a>>b;
        cout<<min(a,a/b)<<endl;
    }
}
