#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            cin >> arr[x][y];
            
        }
        
    }
    int count=0;
    for (int x = 0; x < n; x++)
    {
        
        for (int y = 0; y < m; y++)
        {
            for(int k=x;k<=y;k++){
                if (arr[x][0] % arr[x + 1][1] == 0)
                {
                    count++;
                }
            }
            
        }
        cout << count << endl;
    }
    
}