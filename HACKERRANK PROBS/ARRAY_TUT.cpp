#include<iostream>
using namespace std;
int main(){
    int V;
    cin>>V;
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int idx[]={0};
    for(int x=0;x<n;x++){
        if(arr[x]==V){
            idx[arr[x]]=x;
            cout << x << endl;
        }
        
    }
    
}