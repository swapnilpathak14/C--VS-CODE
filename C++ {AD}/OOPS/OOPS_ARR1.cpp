#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;

    void setname(string s){  //to access a private data member of the class
        name =s;
    }

    void printinfo(){        
        
    }
};
int main(){
    int n;
    cin>>n;
    student arr[n];
    for(int x=0;x<n;x++){
        cout<<"Name: ";
        string s;
        cin>>s;
        getline(cin,s);
        arr[x].setname(s);
        cout<<"Age: ";
        cin>>arr[x].age;
        cout<<"Gender: ";
        cin>>arr[x].gender;
    }
    for(int x=0;x<n;x++){
        arr[x].printinfo();
    }
}