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
    int p[n],sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
        p[i]=sum;
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
    cout<<endl;
    return 0;
}