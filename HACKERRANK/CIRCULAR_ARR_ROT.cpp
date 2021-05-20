#include<iostream>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;  //k=rotation, q=query for indices
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int idx[n];
    k=k%n;
    for(int x=0;x<q;x++){
        
        if(x+k>=n){
            idx[x+k-n]=arr[x];
        }
        else{
            idx[x+k]=arr[x];
        }
    }
    for(int x=0;x<n;x++){
        cout<<idx[x]<<endl;
    }

    

}