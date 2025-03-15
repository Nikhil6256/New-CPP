//length of char and reverse of char
#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
}
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!= '\0';i++){        //Last element of the char is '\0'
        count++;
    }
    return count;
}
void reverse(char name[],int n){
    int s=0, e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
bool palindrome(char ch[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(toLowerCase(ch[s])!=toLowerCase(ch[e]))
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cin>>name;
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"Length of Name is: "<<len<<endl;
    reverse(name,len);
    cout<<"Reverse Name is "<< name<<endl;
    cout<<"Palindrome or not: "<<palindrome(name,len)<<endl;
    cout<<"Character is "<<toLowerCase('b')<<endl;
    cout<<"Character is "<<toLowerCase('C')<<endl;
    return 0;
}