//Reverse ann array
#include<bits/stdc++.h>
using namespace std;
    vector<int>reverse(vector<int>v){
        int s=0,e=v.size()-1;
        while(s<=e){
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;
    }

    void print(vector<int>v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
int main(){

    vector<int>v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(63);
    v.push_back(41);
    v.push_back(85);
    v.push_back(54);
    cout<<"Normal array is: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>ans=reverse(v);
    cout<<"Reversed array is: ";
    print(ans);
}