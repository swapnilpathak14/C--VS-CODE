#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            cin>>arr[x][y];
        }
    }
    int sum =0;
    int sum_en=0;
    int diff;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(x==y){
                sum+= arr[x][y];
                sum_en+=arr[x][n-1-y];
            }
        }
        diff=abs(sum_en - sum);
    }
    cout<<diff<<endl;
}