//GOOGLE KICKSTART PROBLEM
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int pd=0;
    for(int x=0;x<n;x++){
        pd=arr[x+1]-arr[x];
        
    }
    int curr=0;
    int ans=0;
    for(int y=0;y<n;y++){
        if(pd==arr[y+1]-arr[y]){
            curr++;
        }
        else{
            pd=arr[y+1]-arr[y];
            curr=2;
        }
        ans=max(ans,curr);

    }
    cout<<ans<<endl;

}