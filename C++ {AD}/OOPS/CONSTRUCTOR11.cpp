#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){
        cout<<"Default Constructor"<<endl;
    }
    student( string s,int a,bool g){
        cout<<"Parameterised Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    //copy constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
};
int main(){
    student a("Swapnil",22,1);
student b;
student c=a;
    return 0;
}