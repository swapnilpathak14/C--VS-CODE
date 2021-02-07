#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int pair=0;
    for(int x=0;x<n;x++){
        if(arr[x]!=0){
            for(int y=x+1;y<n;y++){
                if(arr[x]==arr[y]){
                    pair++;
                    arr[y]=0;
                    break;
                    
                }
            }
        }
    }
    cout<<pair<<endl;
}