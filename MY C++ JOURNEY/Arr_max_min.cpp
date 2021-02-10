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
    int maxno=INT_MIN; //INITIALIZE
    int minno=INT_MAX;
    for(int y=0;y<n;y++){
        if(arr[y]<maxno){
            maxno=arr[y];

        }
        if(arr[y]>minno){
            minno=arr[y];

        }
        cout<<maxno<<" "<<minno<<endl;
    }
    return 0;

}