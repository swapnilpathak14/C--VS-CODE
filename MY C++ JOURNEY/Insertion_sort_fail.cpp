#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int x=1;x<n;x++){
        int current=arr[x];
        int y=x-1;
        for(y<current;y>=0;y--){
            if(arr[y]>current && y>=0){
                arr[y+1]=arr[y];
            }
        }
        arr[y+1]=current;
    }

    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
}