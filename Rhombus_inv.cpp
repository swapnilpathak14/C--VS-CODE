#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int x=1;x<=n;x++){
        
        for(int y=1;y<=x-1;y++){
            cout<<" ";
        }
        for(int y=1;y<=n;y++){
            cout<<"* ";
        }
        cout<<endl;
    }
}