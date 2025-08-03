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

    void print(node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }

    node* removehead(node* head){
        if(head == NULL)
        return head;
        node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }

    node*removetail(node* head){
        if(head==NULL || head -> next ==NULL)
        return NULL;

        node* temp = head;
        while(temp->next->next != NULL){
            temp = temp -> next;
        }
        delete temp->next;
        temp->next=nullptr;
        return head;
    }

int main()
{
    vector<int>v={2,4,5,6};
    node* head=ConvertArr2LL(v);
    head= removetail(head);
    print(head);
}