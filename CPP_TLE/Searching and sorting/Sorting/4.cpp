#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>v,int target){
    int left=0,right=v.size()-1;
    int ans=v.size();
    while(left<=right){
        int mid=(left+right)/2;
        if(v[mid]>=target){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}
int main()
{
    
    return 0;
}