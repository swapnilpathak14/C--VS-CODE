#include<iostream>
#include<algorithm>
using namespace std;
int pairs(int n,int k, int arr[]){
    sort(arr,arr+n);
    int count=0;
    for(int x=0;x<n;x++){
        if(arr[x+1]-arr[x]>k){
            x++;
        }
        else if(arr[x+1]-arr[x]==k){
            count++;
            x++;
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    cout<<pairs(n,k,arr)<<endl;
}
