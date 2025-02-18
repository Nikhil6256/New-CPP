#include<iostream>
using namespace std;
void pattern1(int n)
{
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    cout<<"* ";
  }
  cout<<endl;
}
}
//Second pattern
void pattern2(int n)
{
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
void pattern3(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
void pattern4(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i;
    }
    cout<<endl;
  }
}
void pattern5a(int n){
for(int i=1;i<=n;i++){
  for(int j=1;j<=(n-i+1);j++){
    cout<<"*";
  }
  cout<<endl;
}
}
void pattern5b(int n){
  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      cout<<"*";
    }
    cout<<endl;
  }
}
void pattern6(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i+1);j++){
      cout<<j;
    }
    cout<<endl;
  }
}
void pattern7(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<" ";
    }
    for(int k=1;k<=n-i+1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}
void pattern8(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<" ";
    }
    for(int k=1;k<=n-i+1;k++){
      cout<<i;
    }
    cout<<endl;
  }
}
void pattern9(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int k=1;k<=i;k++){
      cout<<i;
    }
    cout<<endl;
  }
}
void pattern10a(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        cout << " ";
    }
    for (int j = i + 1; j <= n; j++) {
        cout << j;
    }
    cout << endl;
}
}
void pattern10b(int n){
  for (int i = 1; i <= n; i++) {
    for (int j =2; j <= i; j++) {
        cout << " ";
    }
    for (int k=i; k <= n; k++) {
        cout << k;
    }
    cout << endl;
}
}
void pattern11(int n){
  int count = 1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
      cout<<count++;
    }
    cout<<endl;
  }
}
void pattern12(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
      cout<<"*";
    }
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void pattern13(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int k=0;k<((2*n)-(2*i+1));k++){
      cout<<"*";
    }
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void pattern14(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
      cout<<"*";
    }
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }


for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int k=0;k<((2*n)-(2*i+1));k++){
      cout<<"*";
    }
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void pattern15(int n){
  for(int i=1;i<=(2*n-1);i++){
    int stars=i;
    if(i>n) stars = 2*n-i;
    for(int j=1;j<=stars;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
void pattern16(int n){
  int start=1;
  for(int i=0;i<n;i++){
    if(i%2==0) start=1;
    else start=0;
    for(int j=0;j<=i;j++){
      cout<<start;
      start=1-start;    //flip between 0 and 1
    }
    cout<<endl;
  }
}
void pattern17(int n){
  int space = 2*(n-1);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    for(int k=1;k<=space;k++){
      cout<<" ";
    }
    for(int j=i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
    space -= 2;
  }

}
void pattern18(int n){
  int count =1;
  for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    cout<<count<<" ";
    count++;
  }
  cout<<endl;
}
}
void pattern19(int n){
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    char ch='A'+j-1;
    cout<<ch;
  }
  cout<<endl;
}
}
void pattern19b(int n){
  for(int i=0;i<n;i++){
    for(char ch = 'A'; ch<='A'+i;ch++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
void pattern20(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      char ch='A'+i-1;
      cout<<ch;
    }
    cout<<endl;
  }
}
void pattern21(int n){
  char ch='A';
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }
}
void pattern22(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      char ch='A'+i+j-2;
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }
}
void pattern23(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      char ch='A'+i+j-2;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
void pattern23b(int n){
  for(int i=1;i<=n;i++){
    char ch='A'+i-1;
    for(int j=1;j<=i;j++){
      cout<<ch;
      ch++;
    }
    cout<<endl;
  }
}
void pattern24(int n){
  for(int i=1;i<=n;i++){
    char ch='A'+n-i;
    for(int j=1;j<=i;j++){
      cout<<ch;
      ch++;
    }
    cout<<endl;
  }
}
void pattern25(int n){
  for(int i=1;i<=n;i++){
    for(char ch='A';ch<='A'+n-i;ch++){     //debug this line
      cout<<ch;
    }
    // for(int k=1;k<i-1;k++){
    //   cout<<" ";
    // }
    cout<<endl;
  }
}
void pattern26(int n){
    for(int i=0;i<n;i++){
      //space
      for(int j=0;j<n-i-1;j++){
        cout<<" ";
      }
      //star
      char ch='A';
      int breakpoint = (2*i+1)/2;
      for(int k=1;k<=(2*i + 1);k++){
      cout<<ch;
      if(k<=breakpoint) ch++;
      else ch--;
      }
      //space
      for(int j=0;j<n-i-1;j++){
        cout<<" ";
      }
      cout<<endl;
    }
}
void pattern27(int n){
  int iniS = 0;           //Initial space
  for(int i=0;i<n;i++){
    //stars
    for(int j=1;j<=n-i;j++){
      cout<<"*";
    }
    //space
    for(int j=0;j<iniS;j++){
      cout<<" ";
    }
    //stars
    for(int j=1;j<=n-i;j++){
      cout<<"*";
    }
    iniS += 2;
    cout<<endl;
  }
  iniS=8;
  for(int i=1;i<=n;i++){
    //star
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    //space
    for(int j=0;j<iniS;j++){
      cout<<" ";
    }
    //star
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    iniS -= 2;
    cout<<endl;
  }
}
void pattern28(int n){
  int spaces=2*n-2;
  for(int i=1;i<=2*n-1;i++){
    int stars=i;
    if(i>n) stars=2*n-i;
    //stars
    for(int j=1;j<=stars;j++){
      cout<<"*";
    }
    //space
      for(int j=1;j<=spaces;j++){
        cout<<" ";
      }
    //stars
    for(int j=1;j<=stars;j++){
      cout<<"*";
    }
    cout<<endl;
    if(i<n) spaces -= 2;
    else spaces += 2;
  }
}
void pattern29(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || j==0 || i==n-1 || j==n-1){
        cout<<"*";
      }
      else cout<<" ";
    }
    cout<<endl;
  }
}
void pattern30(int n){
  
}
int main()
{
  int a;
  cin>>a;
  pattern30(a);

  // pattern2(a);   just print by using function name with any pattern


}