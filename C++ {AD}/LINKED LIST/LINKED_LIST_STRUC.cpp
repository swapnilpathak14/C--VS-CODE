#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next; //as pointer is supposed to point out to the next node

    //create CONSTRUCTOR to make things easier
    node(int val){
        data=val; //value goes into the data field
        next=NULL;

    }
    void printinfo(){
        cout<<"The value of the 1st element is: "<<endl;
        cout<<data<<endl;
    }

};
int main(){
    node a(25.6);
    a.printinfo();
}