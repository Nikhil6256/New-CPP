#include<iostream>
using namespace std;
int main()
{
  char n; 
  
  cin>>n;
  if(n>='a' && n<='z'){  
    cout<<(char)(n-32);
  }
  else if(n>='A' && n<='Z'){    
  cout<<(char)(n+32); 
  }
    return 0;
}