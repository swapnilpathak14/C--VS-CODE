#include<iostream>
#include<climits>
using namespace std;
int maxarr(int n, int arr[]){
    int curr=0,pos=0, temp;
    for (int i = 0; i <n; i++)
    {
        temp = curr;
        curr = max(arr[i] + pos, temp);
        pos = temp;
    }
    return max(curr, pos);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    cout<<maxarr(n,arr)<<endl;
}