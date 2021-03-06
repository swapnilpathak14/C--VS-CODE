#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //CONSTRUCTOR
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
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node* reversen(node* &head){ //head is by reference for further modifications
    
    node* prevptr=NULL;
    node *currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        //Move forward
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    node *head = NULL; //by value
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    display(head);
    node* newhead=reversen(head);
    display(newhead);

    return 0;
}
