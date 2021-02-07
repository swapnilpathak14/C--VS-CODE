#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int x=1;x<=n;x++){
        int space = n-x;
        for(int y=space;y>=1;y--){
            cout<<" ";
        }
        for(int y=1;y<=x;y++){
            cout<<"* ";
        }
        cout<<endl;
    }
}