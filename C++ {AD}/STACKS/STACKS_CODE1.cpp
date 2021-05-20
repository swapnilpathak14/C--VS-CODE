#include<iostream>
using namespace std;

#define n 100
class stack{
    int* arr; //Dynamically created
    int top; //pointer

    public:
    //create a constructor
    stack(){
        arr=new int[n];
        top=-1; //pointer at -1 index
    }
    //PUSH OPERATION
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow \n";
            return;
        }
        //If the above consdition is not true
        top++;
        arr[top] = x;
    }
    //POP OPERATION
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    //TOP OPERATION
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    //EMPTY OPERATION
    bool empty(){
        return top==-1;
    } 
};
int main(){
    //create a stack class
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(7);
    cout<<st.Top()<<"\n";
}