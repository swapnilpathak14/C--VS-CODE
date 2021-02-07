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
    int maxsum=INT_MIN;
    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            int sum=0;
            for(int k=x;k<=y;k++){
                sum+=arr[k];
            }
            maxsum = max(maxsum, sum);
        }
        
    }
    cout<<maxsum<<endl;
}