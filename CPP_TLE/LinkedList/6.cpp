#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node* next;

    node(int data1){
        data=data1;
        next=nullptr;
    }
};
    node* ConvertArr2LL(vector<int>&arr){
        node* head = new node(arr[0]);
        node* mover = head;
        for(int i=1;i<arr.size();i++){
            node* temp = new node(arr[i]);
            mover -> next = temp;
            mover = temp;
        }
        return head;
    }

    int checkIfPresent(node* head, int val){
        node* temp = head;
        while(temp){
            if(temp->data==val)
                return 1;
                temp = temp->next;
        }
        return 0;
    }

int main()
{
    vector<int>v={2,4,5,6};
    node* head=ConvertArr2LL(v);
    cout<<checkIfPresent(head,5);
}