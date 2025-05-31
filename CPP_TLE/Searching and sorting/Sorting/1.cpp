#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>a,int target){
    int left=0,right=a.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==target)
        return true;
        if(a[mid]<target)   left=mid+1;
        if(a[mid]>target)   right=mid-1;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int>V;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        V.push_back(x);
    }
    int target;
    cin>>target;
    if(search(V, target)){
        cout<<"YES, It is present inside it\n";
    }
    else{
        cout<<"NO, It is not present inside it\n";
    }
    return 0;
}