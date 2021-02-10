#include<iostream>
#include<cmath>
using namespace std;
int missmeeta(int n,int arr[]){
    int card=0;
    int maxs=0;
    for(int x=0;x<n;x++){
        int root=sqrt(arr[x]);
        if(root*root==arr[x]){
          card++;
          
        }
        
        
    }
    
    return card;  
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        cout<<missmeeta(n,arr)<<endl;
    }
    return 0;
}