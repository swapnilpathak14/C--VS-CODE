#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx=-199999;
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int x=0;x<n;x++){
        mx=max(mx,arr[x]);
        cout<<mx<<endl;

    }
    return 0;
}