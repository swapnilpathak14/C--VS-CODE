#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    int *ptr=arr;
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int x=0;x<n;x++){
        cout<<*ptr<<endl;
        ptr++;
    }
}