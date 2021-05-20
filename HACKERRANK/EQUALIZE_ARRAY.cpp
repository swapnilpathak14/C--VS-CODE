#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int ans=0;
    vector<long long int>arr;
    for(long long int x=0;x<arr.size();x++){
        arr[x].push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(long long int x=0;x<n;x++){
        if(arr[x]==arr[x+1]){
            continue;
        }
        else{
            arr.delete();
            ans++;
        }
    }
    cout<<ans<<"\n";
}