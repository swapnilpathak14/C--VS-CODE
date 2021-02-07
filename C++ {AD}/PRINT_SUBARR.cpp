#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int x=0;x<n;x++){
        cin>>arr[x];
    }

    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            for(int k=x;k<=y;k++){ //for the elements between x and y to print out the subarrays
            cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}