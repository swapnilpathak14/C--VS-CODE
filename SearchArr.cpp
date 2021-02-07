#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for(int x=0;x<n;x++){
        if(arr[x]==key){
            return x;
        }
        
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
        
    }
    int key;
    cin>>key;

    cout << linearsearch(arr, n, key) << endl;
return 0;
}