#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int height[n];
    
    for(int x=0;x<n;x++){
        cin>>height[x];
    }

    int maxj=INT_MIN;
    for(int x=0;x<n;x++){
        if(height[x]>maxj){
            maxj=height[x];
        }
    }
    if(k<maxj){
        cout<<maxj-k;
        return 0;
    }


}