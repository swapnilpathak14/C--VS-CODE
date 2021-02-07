#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int x=0;x<n;x++){
        maxno = max(maxno,arr[x]);
        minno = min(minno,arr[x]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
    
}