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

    int currsum = 0; //variable initialized with 0
    int maxsum=INT_MIN;
    for(int x=0;x<n;x++){
        currsum =currsum + arr[x];
        if(currsum<0){
            currsum=0;

        }
        maxsum=max(maxsum,currsum);
    }
    cout<<currsum<<endl;

}