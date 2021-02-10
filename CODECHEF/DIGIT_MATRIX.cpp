#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1][n+1];
    for(int x=1;x<n+1;x++){
        for(int y=1;y<n+1;y++){
            cin>>arr[x][y];
        }
    }

    int B[n+1][n+1];
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            cout<<B[i][j]<<" ";
        }
    }
    for(int x=1;x<n+1;x++){
        for(int y=1;y<n+1;y++){
            for(int i=0;i<=9;i++){
                for(int j=1;j<=9;j++){
                    arr[x][y] = B[i][j] + B[i + 1][j] + B[i][j + 1] + B[i + 1][j + 1];
                }
            }
            
        }
    }
   
    for (int x = 1; x < n + 1; x++)
    {
        for (int y = 1; y < n + 1; y++)
        {
            cout << arr[x][y]<<" ";
        }
        cout<<endl;
    }
}