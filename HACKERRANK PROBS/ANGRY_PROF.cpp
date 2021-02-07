#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n,k;
        cin>>n>>k;
        int st=0;
        int arr[n];
        for(int y=0;y<n;y++){
            cin>>arr[y];
        }
        for(int y=0;y<n;y++){
            if (arr[y] <= 0)
            {
                st++;
            }
        }
        if(st>=k){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    
}