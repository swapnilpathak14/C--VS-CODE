#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int counter=1;
    int count=0;
    for(int counter=1;counter<n;counter++){
        for(int x=0;x<n-counter;x++){
            if(arr[x]>arr[x+1]){
                int temp = arr[x]; //to swap create a temp variable
                arr[x]=arr[x+1];
                arr[x+1]=temp;
                count++;
                
            }
        }
        
    }
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
}