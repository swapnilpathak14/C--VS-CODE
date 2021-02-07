#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    long long sum=0; //you can either write long long int or long long both are same
    for(int y=0;y<n;y++){
        sum=sum + arr[y];
    }
    cout<<sum<<endl;
}