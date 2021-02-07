#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3]; //matrix array

    for(int x=0;x<n1;x++){
        for(int y=0;y<n3;y++){
            cin>>m1[x][y];
        } 
    }
    for (int x = 0; x < n2; x++)
    {
        for (int y = 0; y < n3; y++)
        {
            cin >> m2[x][y];
        }
    }
    int ans[n1][n3];
    for(int x=0;x<n1;x++){
        for(int y=0;y<n3;y++){
            ans[x][y]=0;
        }
    }
    //order-3: Nested lOOP
    for(int x=0;x<n1;x++){
        for(int y=0;y<n3;y++){
            for(int k=0;k<n2;k++){
                ans[x][y]+=m1[x][k]*m2[k][y];
            }
        }
    }
    for(int x=0;x<n1;x++){
        for(int y=0;y<n3;y++)
            cout<<ans[x][y]<<" ";
        
        cout<<endl;
    }
}