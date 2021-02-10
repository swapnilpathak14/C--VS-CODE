#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int x=0;x<n;x++){
        cin>>arr[x];
    }

    for(int x=0;x<n-1;x++){
        
        for(int y=x+1;y<n;y++){
            if(arr[y]<arr[x]){

                int temp=arr[y];
                arr[y]=arr[x];
                arr[x]=temp;
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}