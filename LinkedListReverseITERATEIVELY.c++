#include<iostream>
#include<algorithm>

using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }  

};
node * reversealinkedlist(node* head){
    if(head==NULL || head-> next ==NULL){// case when LL is empty or LL have only one element.
        return head;
    }
    node* previous = NULL;
    node*current=head;
    node*forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    return previous;
}
int main()

{
    node*head = new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    cout<<"original linked list"<<endl;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
    

    head=reversealinkedlist(head);
    cout<<"reversed linked list"<<endl;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;



    return 0;
}