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
        cout<<temp->data<<endl;
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
int main()

{   
    node* node1=new node(10);
    node* head= node1;
    print(head);
    // cout<<endl;
    cout<<getLength(head)<<endl;

    
    return 0;
}