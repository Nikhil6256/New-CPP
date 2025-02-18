#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
  cin>>a;
    for(int i=0;i<a.length();i+=2){
        b += a[i];
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.length()-1;i++){
        cout<<b[i]<<"+";
    }
    cout<<b.back()<<endl;
    return 0;
}