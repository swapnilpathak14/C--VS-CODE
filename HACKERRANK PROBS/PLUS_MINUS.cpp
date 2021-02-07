#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int len=0;
    float frac = 0;
    float pos = 0;
    float neg = 0;
    for(int y = 0; y < n; y++){
        
        if(arr[y]>0){
            pos++;
            
        }
        else if(arr[y]<0){
            neg++;
        }
        else if(arr[y]==0){
            frac++;
        }
    }
    cout<<(pos/n)<<endl;
    cout<<(neg/n)<<endl;
    cout<<(frac/n)<<endl;
    
}