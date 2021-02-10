#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int toy=0;
    int count=0;
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            if(arr[x]>arr[y]){
                int temp=arr[x];
                arr[x]=arr[y];
                arr[y]=temp;
            }

        }
    }
    for(int x=0;x<n;x++){
        toy+=arr[x];
        if(toy<=k){
            count++;
        }
    }
    cout<<count<<endl;
}