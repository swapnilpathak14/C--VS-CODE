#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int x=0;x<=n;x++){
        for(int y=1;y<=n-x;y++){
            cout<<" ";
            
        }
        
        for(int y=0;y<=x;y++){
            cout<<"#";
        }
       
        
        cout<<endl;
    }
    
}        