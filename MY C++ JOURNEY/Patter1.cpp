#include <iostream>
using namespace std;
int main(){
    int rows, columns;
    cin>>rows>>columns;   //input from user

    for(int x=1;x<=5;x++){
        for(int y=1;y<=6;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}