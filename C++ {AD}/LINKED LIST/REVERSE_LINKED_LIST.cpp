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
void reversen(node* &head){
    
}