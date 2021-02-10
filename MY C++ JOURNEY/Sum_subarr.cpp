#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }

    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            int sum=0;

            sum = sum + arr[y];
            cout<<arr[y]<<" ";
        }
        cout<<endl;
    }
    return 0;
}