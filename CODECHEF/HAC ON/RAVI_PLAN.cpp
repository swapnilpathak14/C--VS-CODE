#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    int cnt=0;
    int maxs=0;
    int ma=0;
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            
            
            maxs=max(count,maxs);
            
            while(arr[y]=0){
                cnt++;
                if(arr[y]==1){
                    y++;
                }
                ma=max(cnt,ma);
            }
        }
    }
    cout<<max(count,cnt)<<endl;
}