#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            cin>>arr[x][y];
        }
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = x; y < n; y++)
        {
            int temp=arr[x][y];
            arr[x][y]=arr[y][x];
            arr[y][x]=temp;
        }
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cout<<arr[x][y]<<" ";
        }
        cout << endl;
    }
    
}