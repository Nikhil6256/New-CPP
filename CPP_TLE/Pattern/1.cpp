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



int main()
{
  int a;
  cin>>a;
  pattern12(a);
  // pattern2(a);   just print by using function name with any pattern


}