#include<iostream>
using namespace std;
bool pairsum(int arr[],int n, int k){
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(arr[x]+arr[y]==k){
                cout<<x<<" "<<y<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;
}