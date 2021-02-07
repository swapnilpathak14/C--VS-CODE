#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(string s){
        name=s;
    }

    void setname(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
};
int main(){
    student a("Swapsu");
    a.getname();

}