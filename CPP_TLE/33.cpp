#include<iostream>
using namespace std;
int maxi(int a,int b,int c,int d){
    int max_value = a;
    if(b>max_value) max_value=b;
    if(c>max_value) max_value=c;
    if(d>max_value) max_value=d;
    return max_value;
}
int main()
{
  cout<<maxi(1,5,6,3);
    
}