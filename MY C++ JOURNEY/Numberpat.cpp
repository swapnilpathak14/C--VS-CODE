#include<iostream>
using namespace std;
int main(){
    int x,y,n;
    cin>>n;
    for(x=1;x<=n;x++){
        for(y=1;y<=n-x;y++){
            cout<<" ";
        }
        for(y=1;y<=x;y++){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}