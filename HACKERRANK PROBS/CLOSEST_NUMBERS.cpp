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
    int d;
    sort(arr,arr+n);
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            d = arr[y] - arr[x];
            cout << d<<" ";
        }
        
    }
    cout<<endl;
}