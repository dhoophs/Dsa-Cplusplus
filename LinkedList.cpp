#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this ->data= data;
        this ->next= NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtMiddle(Node* &head,Node* &tail, int pos,int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;

    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}

void deleteNode(Node* &head, int pos){
    Node* temp=head;
    while(cnt)
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail=node1;
    insertAtHead(head,15);
    insertAtTail(tail,20);
    insertAtMiddle(head,tail,2,4);
    print(head);
    cout<<endl;
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;
    return 0;
}