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
    node(int data1, node* next1){
        data = data1;
        next = next1;
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

    node* removeK(node* head, int k){
        if(head==NULL)  return head;
        if(k==1){
            node* temp = head;
            head = head->next;
            free(temp);
            return head;
        }
        int cnt=0;
        node* temp = head;
        node* prev = NULL;
        while(temp!=NULL){
            cnt++;
            if(cnt==k){
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
    node* removeEl(node* head, int el){
        if(head==NULL)  return head;
        if(head->data==el){
            node* temp = head;
            head = head->next;
            free(temp);
            return head;
        }
        node* temp = head;
        node* prev = NULL;
        while(temp!=NULL){
            if(temp->data==el){
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
    
    node* InsertHead(node* head,int val){
        node* temp = new node(val,head);
        return temp;
    }

    node* InsertTail(node* head,int val){
        if(head==NULL){
            return new node(val);
        }
        node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        node* newNode = new node(val);
        temp->next=newNode;
        return head;
    }

    node* InsertPosition(node* head,int el,int k){
        if(head==NULL){
            if(k==1){
                return new node(el);
            }
            else{
                return head;
            }
        }
        if(k==1){
            return new node(el,head);
        }
        int cnt=0;
        node* temp=head;
        while(temp!=NULL){
            cnt++;
            if(cnt==(k-1)){
                node* x= new node(el,temp->next);
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
        return head;
    }

    node* InsertBeforeValue(node* head,int el,int val){
        if(head==NULL){
            return NULL;
        }
        if(head->data==val){
            return new node(el,head);
        }
        node* temp=head;
        while(temp->next!=NULL){
            if(temp->next->data==val){
                node* x=new node(el,temp->next);
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
        return head;
    }

int main()
{
    vector<int>v={2,4,5,6};
    node* head=ConvertArr2LL(v);
    head= InsertBeforeValue(head,100,4);
    print(head);
}