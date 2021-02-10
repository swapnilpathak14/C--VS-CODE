#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){

        for(int y=1; y<=n - i; y++){         //loop for space
            cout<<" ";
        }
        for(int y=1;y<=n;y++){           //loop for star (since the rhombus is not aligned)
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}