#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insert(Node* &head,int d){
       Node* temp=new Node(d);
       Node *ptr=head;
       while(ptr!=NULL){
           ptr=ptr->next;
       }
       ptr->next=temp;
}
void print(Node* &head){
    Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;
}
int main(){
    Node* node = new Node(10);
    Node *head=node;
    //print(node);
    insert(head,12);
    print(head);
}