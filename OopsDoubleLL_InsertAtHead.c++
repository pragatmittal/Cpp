#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    int data;
    node* previous;
    node* next;

    node(int d ){
        this->data=d;
        this->previous=NULL;
        this->next=NULL;

    }
};
void print(node* head){
    node*temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
int getLength(node* head){
    int len=0;
    node*temp = head;

    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;
}
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->previous=temp;
    head=temp;
}
int main()

{   
    node* node1=new node(10);
    node* head= node1;
    print(head);
    // cout<<endl;
    cout<<getLength(head)<<endl;
    insertathead(head,11);
    print(head);
    insertathead(head,19);
    print(head);
    insertathead(head,17);
    print(head);
    insertathead(head,14);
    print(head);
    
    return 0;
}