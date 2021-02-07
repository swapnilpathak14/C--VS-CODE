#include<iostream>
using namespace std;
bool sortedarray(int arr[],int n){
    if(n==1){
        return true;
    }
    bool sortedarr=sortedarray(arr+1,n-1); //arr+1 for the pointer to pass on the 1st element rather than 0th element
    if(arr[0]<arr[1] && sortedarr){
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    
    cout<<sortedarray(arr,n)<<endl;
}