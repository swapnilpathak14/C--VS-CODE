#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int st=0;
    int en=n-1;
    while(st<en){
        if(arr[st]+arr[en]==k){
            cout<<st<<" "<<en<<endl;
            return true;
        }
        else if (arr[st] + arr[en] > k)
        {
            en--;
        }
        else{
            st++;
        }
        
    }
    return false;
}
