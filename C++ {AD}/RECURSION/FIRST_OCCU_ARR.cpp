#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    int i=0;
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    cout<<firstocc(arr,n,i,key)<<endl;
}