#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int maxsum=INT_MIN;
    
    int arraysum=0;
    for(int x=0;x<n;x++){
        arraysum+=arr[x];
        if(arraysum<0){
            arraysum=0;
        }
       
    }
    int wrapsum=0;
    int sum = 0;
    for (int y = 0; y < n; y++)
    {
        sum = sum + arr[y];
        arr[y] = -arr[y];        
    }
    maxsum = max(maxsum,sum);
    wrapsum=maxsum+sum;
    cout<<wrapsum;
}