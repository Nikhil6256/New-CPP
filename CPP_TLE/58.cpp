#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m,a;
  cin>>n>>m>>a;
  long long length = (n+a-1)/a;
  long long breadth = (m+a-1)/a;
  long long result = length*breadth;
  cout<<result;
    return 0;
}