#include<bits/stdc++.h>
using namespace std;
int search(vector<int>a,int target){
    int left=0,right=a.size()-1;
    while(left<right){
        int mid=(left+right+1)/2;
        if(a[mid]<=target) left = mid;
        if(a[mid]>target) right = mid-1;
    }
    return (a[left]==target)?left:-1;
}
int main()
{   
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int t;  cin>>t;
    int m=search(v,t);
    cout<<m;
}