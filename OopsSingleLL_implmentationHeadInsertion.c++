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
void InsertAthead(node* &head,int d){//we had taken reference because we don't want to make a copy  , i want to make a change in a original linked list.
    node* temp=new node(d);
    temp->next=head;
    head=temp;


}
void print(node* &head){
    node* temp= head;
    while(temp != NULL){
        cout<< temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;

}
int main()
{

    node* node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    node* head= node1 ;
    print(head);

    InsertAthead(head,12);
    print(head);
    
    InsertAthead(head, 14);
    print(head);


    return 0;
}