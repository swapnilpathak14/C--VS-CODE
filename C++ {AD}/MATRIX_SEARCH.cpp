//OPTIMIZED METHOD USING SORTING
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    int mat[n][m];
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            cin>>mat[n][m];
        }
    }
    int r=0,c=n-1;
    bool found=false;
    while(r<m && c>=0){

        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {

            r++;
        }
    }
    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Does not exist";
    }  
}