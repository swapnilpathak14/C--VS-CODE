#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    student(string s, int a, bool g) //constructor
    {
        name = s;
        age = a;
        gender = g;
    }

    
    void printinfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }
};
int main()
{
    student a("Swapnil",22,1);
    a.printinfo();
}