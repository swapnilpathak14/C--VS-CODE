#include<iostream>
using namespace std;
//FUNCTION OVERLOADING

class pupkit
{
    public:

    void func(){
        cout<<"I am a small kitt with no arguements"<<endl;
    }
    void func(int x){
        //arguement of int datatype
        cout<<"I am a funct with int agrument"<<endl;
    }
    void func(double x){
        cout<<"I am a func with double arguement"<<endl;
    }

};
int main(){
    //create an object in the main function of the above class
    pupkit obj; //identififer
    obj.func();
    obj.func(4);
    obj.func(6.2);
}