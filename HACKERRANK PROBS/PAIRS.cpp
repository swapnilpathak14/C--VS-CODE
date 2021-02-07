#include<iostream>
#include<algorithm>
using namespace std;
int pairs(int n,int k, int arr[]){
    sort(arr,arr+n);
    int count=0;
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            if(arr[y]-arr[x]==k){
                count++;
            }
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
