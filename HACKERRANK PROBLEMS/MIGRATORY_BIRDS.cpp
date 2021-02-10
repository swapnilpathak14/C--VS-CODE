#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    sort(arr,arr+n);
    int pos=0;
    int mini=arr[0];
    int val=0;
    int idx[n]={};
    for(int x=0;x<n;x++){
        if(arr[x]==arr[x+1]){
            pos++;
            
            
            val = min(arr[x],mini);
        }
        else if(idx[arr[x]]!=-1){
            idx[arr[x]]=x;
        }
    }
    cout<<val<<endl;
    
}