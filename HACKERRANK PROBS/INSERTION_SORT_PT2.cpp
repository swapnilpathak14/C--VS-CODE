#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int current=0;
    for(int x=1;x<n;x++){
        current=arr[x];
        int y = x-1;
        while(arr[y]>current && y>=0){
            arr[y+1]=arr[y];
            y--;
        }
        arr[y+1]=current;
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    
}