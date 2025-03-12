
//Reverse a array
#include<bits/stdc++.h>
using namespace std;
vector<int>Reverse(vector<int>&v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
            s++;
            e--;
        }
    return v;
}
int main()
{
    int n;
    cin>>n;
  vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   Reverse(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}