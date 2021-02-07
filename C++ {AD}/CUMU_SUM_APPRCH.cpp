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
    int currsum[n+1];
    currsum[0]=0;
    for(int x=0;x<=n;x++){
        currsum[x]=currsum[x-1]+arr[x-1];
    }
    int maxsum=INT_MIN;
    for(int x=0;x<=n;x++){
        int sum=0;
        for(int y=0;y<x;y++){
            sum=currsum[x]-currsum[y];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum;
}