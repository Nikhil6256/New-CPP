#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long double n;
  cin>>n;
  if(ceil(n) == floor(n)){
    cout<<"int "<<n<<endl;
  }
  else{
    cout<<"float "<<(int)n<<" "<<n-floor(n)<<endl;
  }
    return 0;
}