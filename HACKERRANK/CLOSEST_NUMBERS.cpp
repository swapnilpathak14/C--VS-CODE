#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int d[n];
    int mind=arr[1]-arr[0];
    sort(arr,arr+n);
    for(int x=0;x<n;x++){
        if (arr[x + 1] - arr[x] <= mind)
        {
            d[x]=arr[x];
            d[x]=arr[x+1];
        }
    }
    cout<<endl;
}