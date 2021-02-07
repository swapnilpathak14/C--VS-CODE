#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;

    for(int x=1;x<=row;x++){
        for(int y=1;y<=col;y++){    //Using Logical OR
            if(x==1 || x==row){
                cout<<"*";
                
            }
            else if (y == 1 || y == col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}