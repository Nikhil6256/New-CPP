#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int c1=0,c2=0,c3=0;

  for(int i=0;i<s.size();i+=2){
    if(s[i]=='1') c1++;
    if(s[i]=='2') c2++;
    if(s[i]=='3') c3++;
  }
  string t;
  for(int i=0;i<c1;i++) t+="1+";
  for(int i=0;i<c2;i++) t+="2+";
  for(int i=0;i<c3;i++) t+="3+";
  t.pop_back();
  cout<<t<<endl;
    return 0;
}