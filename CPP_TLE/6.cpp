#include<iostream>
using namespace std;
int main(){
    int age; 
    cin>>age;
    bool disabled;
    cin>>disabled;

    if(age>70){
        cout<<"You will get senior citizen benefit\n";
    }
    else if(disabled){
        cout<<"You will get disabled benefit\n";
    }
    else{
        cout<<"No benefit\n";
    }
}