#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node* next;
    node* back;

    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
    node(int data1, node* next1,node* back1){
        data = data1;
        next = next1;
        back=back1;
    }
};

    node* ConvertArr2DLL(vector<int>&arr){
        node* head = new node(arr[0]);
        node* prev=head;
        for(int i=1;i<arr.size();i++){
            node* temp = new node(arr[i],nullptr,prev);
            prev->next=temp;
            prev=temp;
        }
        return head;
    }

    void print(node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }

    //Deletion in Doubly Linked List

    node* DeleteHead(node* head){
        if(head==NULL || head->next==NULL)  return NULL;
        node* prev=head;
        head=head->next;
        
        head->back=nullptr;
        prev->next=nullptr;

        delete prev;
        return head;
    }

    node* DeleteTail(node* head){
        if(head==NULL || head->next==NULL)  return NULL;
        node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        node* newTail = tail->back;
        newTail->next=nullptr;
        tail->back=nullptr;
        delete tail;
        return head;
    }

    node* removeK(node* head,int k){
        if(head==NULL)  return NULL;
        int cnt=0;
        node* kNode = head;
        while(kNode!=NULL){
            cnt++;
            if(cnt==k)  break;
            kNode=kNode->next;
        }
        node* prev=kNode->back;
        node* front=kNode->next;
        if(prev==NULL && front == NULL){
            return NULL;
        }
        else if(prev==NULL)
        return DeleteHead(head);
        else if(front == NULL)
        return DeleteTail(head);
        prev->next=front;
        front->back=prev;
        kNode->next=nullptr;
        kNode->back=nullptr;
        delete kNode;
        return head;
    }

    void DeleteNode(node* temp){
        node* prev = temp->back;
        node* front = temp->next;
        if(front==NULL){
            prev->next=nullptr;
            temp->back=nullptr;
            delete temp;
            return;
        }
        prev->next=front;
        front->back=prev;
        temp->next=temp->back=nullptr;
        delete temp;
    }

    //Insertion 

    node* InsertBeforeHead(node* head, int v){
        node* newHead=new node(v,head,nullptr);
            head->back=newHead;
            return newHead;
    }

    node* InsertBeforeTail(node* head,int v){
        if(head->next==NULL)    return InsertBeforeHead(head,v);
        node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        node* prev=tail->back;
        node* NewNode = new node(v,tail,prev);
        prev->next=NewNode;
        tail->back=NewNode;
        return head;
    }

    node* InsertBeforeKthElement(node* head,int k,int val){
        if(k==1)    return InsertBeforeHead(head,val);
        node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt==k)  break;
            temp=temp->next;
        }
        node* prev = temp->back;
        node* newNode = new node(val,temp,prev);
        prev->next=newNode;
        temp->back=newNode;
        return head;
    }

    void InsertBeforeNode(node* nodee,int val){
        node* prev = nodee->back;
        node* newNode = new node(val,nodee,prev);
        prev->next=newNode;
        nodee->back=newNode;
    }

int main(){
    vector<int>v={1,3,5,7};
    node* head=ConvertArr2DLL(v);
    head=InsertBeforeKthElement(head,3,10);
    // DeleteNode(head->next->next);
    // InsertBeforeNode(head->next,5);
    print(head);
    return 0;
}