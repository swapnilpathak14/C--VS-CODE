#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n,m;
    long long int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long int arr[n];
        long long int ar[m];
        int sum1 = 0;
        int sum2 = 0;
        for(int x=0;x<n;x++){
            cin>>arr[x];
            sum1+=arr[x];
        }
        for(int y=0;y<m;y++){
            cin>>arr[y];
            sum2+=ar[y];
        }
        if(sum1>=sum2){
            cout<<"C1\n";
        }
        else{
            cout<<"C2\n";
        }
        
    }
    return 0;
}