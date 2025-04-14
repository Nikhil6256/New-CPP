//sum from l to r in an array but using less t.c ==> [o,r]-[0,l-1]      i.e (prefix sum till r - prefix sum till l-1)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n];
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l!=0){
            cout<<p[r]-p[l-1]<<endl;
        }
        else{                   //if l==0 nothing will subtract like l-1 no means in index.
            cout<<p[r]<<endl;
        }
    }
    return 0;
}