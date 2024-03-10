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
node * KReverseALL(node* head, int k ){
    if(head==NULL ){// case when LL is empty.
        return head;
    }
    
    node* previous = NULL;
    node*current=head;
    node*forward=NULL;
    int count=0;
    while(current!=NULL && count< k ){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
        count++;
    }
    if(forward !=NULL){
        head->next=KReverseALL(forward,k);
    }
    return previous;
}
int main()


{
    int k =2;

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
    

    head=KReverseALL(head,k);
    cout<<"reversed linked list"<<endl;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;



    return 0;
}