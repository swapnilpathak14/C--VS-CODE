#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){

    }
};
int main(){
    int n;
    cin>>n;

    student arr[n];
    for(int x=0;x<n;x++){
        cout<<"Name: ";
        cin>>arr[x].name;
        cout<<"Age: ";
        cin>>arr[x].age;
        cout<<"Gender: ";
        cin>>arr[x].gender;
    }

    for(int x=0;x<n;x++){
        arr[x].printinfo();
    }
}