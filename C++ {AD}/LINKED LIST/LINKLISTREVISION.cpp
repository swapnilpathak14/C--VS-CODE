#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next; //two data fields //NODE:it is the block of memory
    node(int val){
        data=val; //since node is a block of memory so we assign a value to that mem.
        next=NULL; //"next pointer"  will point to next node here it is null.
    }
};
void insertattail(node* &head, int val){ //we took head by reference, as we have to modify LL

    node* n=new node(val);   //A new node whose data field has "val" and next field has NULL
    
    if(head==NULL){ //BASE CONDITION
        head=n;
        return;
    }
    //Now we have to traverse to the last node of linked list
    //We will need an iterator for that which will traverse the linked list from strt to end

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //after we come out of this loop, add value to the next of temp
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
}