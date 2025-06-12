#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int t;  cin>>t;
    int l=-1,r=n;
    while(r-l>1){
        int m = (l+r)/2;
        if(arr[m]<t){
            l=m;
        }
            else{
            r=m;
            }
    }
    cout<<r<<endl;      //depending on situation write l or r. l is last true and r is last false. r give first index of 4 and l give last index of 4
    return 0;
}