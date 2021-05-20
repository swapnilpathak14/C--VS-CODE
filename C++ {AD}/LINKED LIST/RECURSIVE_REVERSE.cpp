#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
       head=n;
       return; 
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse_recursive(node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverse_recursive(head->next); //this gave us the reverse of remaining linked list
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

int main()
{
    node *head = NULL; //by value
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    node* newhead = reverse_recursive(head);
    display(newhead);

    return 0;
}
