#include<iostream>
using namespace std;
int maxfunc(long long int n,long long int arr[]){
    
    long long int mind=arr[0];
    long long int maxd=arr[0];
    int sum=0;
    for(long long int i=0;i<n;i++){
        if(arr[i]>maxd){
            maxd=arr[i];
        }
        if(arr[i]<mind){
            mind=arr[i];
        }
    }
    sum=maxd-mind;
    sum=sum*2;
    return sum;
}
int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int y=0;y<n;y++){
            cin>>arr[y];
        }
        cout<<maxfunc(n,arr)<<endl;
    }
    return 0;
}