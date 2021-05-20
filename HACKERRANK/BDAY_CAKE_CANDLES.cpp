#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int mx=-199999;
    
    for(int y=0;y<n;y++){
        mx=max(mx,arr[y]); //maximum element in the array
    }
    int count=0;
    
    for(int x=0;x<n;x++){
        if(mx<arr[x]){
            mx=arr[x];
        }
    }
    for(int x=0;x<n;x++){
        if(mx==arr[x]){
            count++;
        }
    }
    cout<<count<<endl;
}