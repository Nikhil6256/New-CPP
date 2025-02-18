#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  
//   for(auto i:  s){   //for each loop
   /* "abcd"
    i='a'
    i='b'
    i='c'
    i='d' */


    // i=tolower(i);
    // if(!(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='y')){
    //     cout<<"."<<i;
    // }
// }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}