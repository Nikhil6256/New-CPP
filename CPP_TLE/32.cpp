#include<iostream>
using namespace std;
void greet(string greet_type,string name){
    cout<<greet_type<<" "<<name<<" !"<<endl;
}
int main(){
    greet("Hi","Nikhil");
}