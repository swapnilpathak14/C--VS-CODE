#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int j;
    int count = 0;

    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int x=0;x<n;x++){
        for (int j = x+1; j < n; j++)
        {
            
            
            if ((arr[x] + arr[j]) % k == 0)
            {
                count++;
                
            }
        }
    }
    cout <<count;
    return 0;
}