#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        int rank;
        cin>>rank;
        int count=0;
        int n;
        cin>>n;
        int arr[n];
        
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        for(int x=0;x<n;x++){
            if(arr[x]<rank){
                count++;
            }

        }
        cout<<count+1<<endl;
        
    }
}