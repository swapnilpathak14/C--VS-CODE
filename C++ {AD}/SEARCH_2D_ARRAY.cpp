#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            cin>>arr[x][y];
        }
    }
    
    int k;
    cin>>k;
    bool check=false;
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if(arr[x][y]==k){
                cout<<x<<" "<<y<<endl;
                check = true;
            }
        }
    }
    if(check){
        cout<<"Element is found \n";
    }
    else{
        cout<<"Element is not found \n";
    }
    return 0;


}