#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
        arr[x]=x;
    }   
    sort(arr, arr + n);
    int d = 99999;
    for (int x = 0;x<n-1;x++)
    {
        if (arr[x] > arr[x + 1] && arr[x+1]-arr[x]<d)
        {
          
          
        }
        d = arr[x + 1] - arr[x];
    }
    cout << d;
    
}