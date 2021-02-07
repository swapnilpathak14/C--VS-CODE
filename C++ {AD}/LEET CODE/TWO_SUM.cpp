#include<iostream>
using namespace std;
int main(){
    int n, givensum;
    cin>>n>>givensum;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
        
    }
    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            if(arr[x]+arr[y]==givensum){
                cout<<x<<" "<<y<<endl;
            }
        }
    }

    
    
    
}