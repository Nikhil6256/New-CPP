#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
  string w;
  cin>>w;

w[w.length() - 2] = 'i';
w.pop_back(); 

cout << w << endl;
    }
    
    return 0;
}