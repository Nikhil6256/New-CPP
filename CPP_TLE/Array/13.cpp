//Reverse ann array from m place
#include<bits/stdc++.h>
using namespace std;
    vector<int>reverse(vector<int>v,int m){
        if(m>=v.size()-1){
            cout<<"Invalid Index\n";
            return v;
        }

        int s=m+1,e=v.size()-1;
        while(s<=e){
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;
    }
    void pair_array(vector<int>v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main(){

    int m;
    cout<<"Enter the value of 'm'\n";
    cin>>m;

    vector<int>v={5,6,8,2,1};
    cout<<"Original array:\n";
    pair_array(v);

    vector<int>ans=reverse(v,m);
    cout<<"Reversed Array\n";
    pair_array(ans);
}