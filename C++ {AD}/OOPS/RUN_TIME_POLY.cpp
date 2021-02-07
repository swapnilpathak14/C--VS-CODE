#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"This is a base class"<<endl;
    }
    virtual void display(){
        cout<<"This is the display of base class"<<endl;
    }
};
class derived: public base{
    public:
    //member functions assign
        void print()
        {
            cout << "This is a derived class" << endl;
        }
        void display()
        {
            cout << "This is the display of derived class" << endl;
        }
};
int main(){
    base *baseptr;
    derived d; //created an object for derived class
    baseptr=&d;

    baseptr->print();
    baseptr->display();

}