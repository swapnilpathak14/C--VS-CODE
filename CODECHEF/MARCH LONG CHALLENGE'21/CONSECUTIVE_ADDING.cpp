#include<bits/stdc++.h>
using namespace std;
bool consadd(long long A[1003][1003],long long B[1003][1003],long long R, long long C){
    for(long long int x=0;x<R;x++){
        for(long long int y=0;y<C;y++){
            if(A[x][y]==B[x][y]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    long long int X,R,C;
    while(t--){
        cin>>R>>C>>X;
        long long int diff,k;
        long long A[1003][1003];
        long long B[1003][1003];
        for(long long int x=0;x<R;x++){
            for(long long int y=0;y<C;y++){
                cin>>A[x][y];
            }
        }
        for (long long int x = 0; x < R; x++)
        {
            for (long long int y = 0; y < C; y++)
            {
                cin >> B[x][y];
            }
        }
        if(R<X && C<X){
            if(consadd(A,B,R,C)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else if(R<X){
            for(long long int x=0;x<R;x++){
                for(long long int y=0;y<C-X;y++){
                    if(A[x][y]==B[x][y]){
                        continue;
                    }
                    else{
                        diff=B[x][y]-A[x][y];
                        A[x][y]+=diff;
                        k=1;
                        while(k<x){
                            A[x][y+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            if (consadd(A, B, R, C))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if(C<X){
            for (long long int x = 0; x < C; x++)
            {
                for (long long int y = 0; y < R - X; y++)
                {
                    if (A[y][x] == B[y][x])
                    {
                        continue;
                    }
                    else
                    {
                        diff = B[y][x] - A[y][x];
                        A[y][x] += diff;
                        k = 1;
                        while (k < x)
                        {
                            A[y + k][x] += diff;
                            k++;
                        }
                    }
                }
            }
            if (consadd(A, B, R, C))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if(R>=X && C>=X){
            for (long long int x = 0; x < R; x++)
            {
                for (long long int y = 0; y < C - X; y++)
                {
                    if (A[x][y] == B[x][y])
                    {
                        continue;
                    }
                    else
                    {
                        diff = B[x][y] - A[x][y];
                        A[x][y] += diff;
                        k = 1;
                        while (k < x)
                        {
                            A[x][y + k] += diff;
                            k++;
                        }
                    }
                }
            }
            for (long long int x = 0; x < C; x++)
            {
                for (long long int y = 0; y < R - X; y++)
                {
                    if (A[y][x] == B[y][x])
                    {
                        continue;
                    }
                    else
                    {
                        diff = B[y][x] - A[y][x];
                        A[y][x] += diff;
                        k = 1;
                        while (k < x)
                        {
                            A[y + k][x] += diff;
                            k++;
                        }
                    }
                }
            }
            if (consadd(A, B, R, C))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}
