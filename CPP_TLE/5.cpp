#include<iostream>
using namespace std;
int main(){
    int a=10,b=20,c=30;
    if(a<b && a<<c){
        cout<<a<<" is smaller\n";
    }
    else if(b<c && b<a){
        cout<<b<<" is smaller\n";
    }
    else{
        cout<<c<<" is smaller\n";
    }
}