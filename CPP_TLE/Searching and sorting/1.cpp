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
    for(int i=0;i<n;i++){
        p[i]=0;
        for(int j=0;j<=i;j++){
            p[i]+=a[j];
        }
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
    cout<<endl;
    return 0;
}