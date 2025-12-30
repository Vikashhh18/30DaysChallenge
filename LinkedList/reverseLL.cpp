// Reverse a linkList by iterative and recursie approach
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};

void insertAtLast(Node* head,int value){
    
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=new Node(value);
    return;
}

void insertAtStart(Node* &head,int value){
    
    Node* neww=new Node(value);
    neww->next=head;
    head=neww;
    return;
}

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void IterativeReverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr){
        Node* nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    head=prev;
    return ;
}

Node* recurrsionReverse(Node*head){
    if(head==NULL|| head->next==NULL)return head;
    Node* temp=recurrsionReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}

int main()
{
    Node* temp=new Node(10);
    insertAtLast(temp,12);
    insertAtLast(temp,14);
    insertAtLast(temp,16);
    insertAtStart(temp,8);
    // print(temp);
    // reverse(temp);
    Node*ans=recurrsionReverse(temp);
    print(ans);
}