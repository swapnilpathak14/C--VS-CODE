#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    const int N=1e6+2;
    bool check[N];
    for(int x=0;x<N;x++){
        check[x]=false;
    }
    for(int x=0;x<n;x++){
        if(arr[x]>=0){
            check[arr[x]]=true;
        }
    }
    int ans=-1;
    for(int x=1;x<N;x++){
        if(check[x]==false){
            ans=x;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;    

}