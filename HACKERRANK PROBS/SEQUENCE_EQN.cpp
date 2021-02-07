#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    
    for(int x=1;x<=n;x++){
        int j;
        cin>>j;
        arr[j]=x;     
    }
    for(int x=1;x<=n;x++){
        cout<<arr[arr[x]]<<endl;
    }
}