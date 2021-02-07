#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; //as pointer is supposed to point out to the next node

    //create CONSTRUCTOR to make things easier
    node(int val)
    {
        data = val; //value goes into the data field
        next = NULL;
    }
};
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertattail(node *&head, int val)
{
    //head by reference and not by value
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    //traverse to the last node of Linked list
    //Create an Iterator
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    //pass by value since there's no modification
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deletelink(node* head, int val){ //val that we are supposed to delete from the linkedlist
     
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    //the above loop is for n-1th node

    //Now change the link of n-1th node
    node* todelete=temp->next;
    temp->next=temp->next->next; //first next is for the delete one, second is to point the nextnode 

    delete todelete;
}
int main()
{
    node *head = NULL; //we will have to send a value to the head
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    //display(head);
    insertattail(head, 4);
    display(head);
    deletelink(head,3);
    display(head);
}