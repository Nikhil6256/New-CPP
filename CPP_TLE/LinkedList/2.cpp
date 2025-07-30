#include<bits/stdc++.h>
using namespace std;

    struct node{
        public:
        int data;
        node* next;

        node(int data1,node* next1){
            data=data1;
            next=next1;
        }
    };

int main()
{
    vector<int>arr={2,5,7,9};
    node* y = new node(arr[0],nullptr);
    cout<<y->data;
    return 0;
}