#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool consadd(ll A[1005][1005],ll B[1005][1005],ll R, ll C){
    ll x,y;
    for(x=0;x<R;x++){
        for(y=0;y<C;y++){
            if(A[x][y]!=B[x][y]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    ll A[1005][1005];
    ll B[1005][1005];
    while(t--){
        ll r,c,X;
        cin>>r>>c>>X;
        ll x,y;
        ll k,diff;
        for(x=0;x<r;x++){
            for(y=0;y<c;y++){
                cin>>A[x][y];
            }
        }
        for(x=0;x<r;x++){
            for(y=0;y<c;y++){
                cin>>B[x][y];
            }
        }
        if(r<X && c<X){
            if(consadd(A,B,r,c)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else if(r<X){
            for(x=0;x<r;x++){
                for(y=0;y<=c-X;y++){
                    if(A[x][y]==B[x][y]){
                        continue;
                    }
                    else{
                        diff=B[x][y]-A[x][y];
                        A[x][y]+=diff;
                        k=1;
                        while(k<X){
                            A[x][y+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(consadd(A,B,r,c)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else if(c<X){
            for(x=0;x<c;x++){
                for(y=0;y<=r-X;y++){
                    if(A[y][x]==B[y][x]){
                        continue;
                    }
                    else{
                        diff=B[y][x]-A[y][x];
                        A[y][x]+=diff;
                        k=1;
                        while(k<X){
                            A[y+k][x]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(consadd(A,B,r,c)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else if(c>=X && r>=X){
            for(x=0;x<c;x++){
                for(y=0;y<=r-X;y++){
                    if(A[y][x]==B[y][x]){
                        continue;
                    }
                    else{
                        diff=B[y][x]-A[y][x];
                        A[y][x]+=diff;
                        k=1;
                        while(k<X){
                            A[y+k][x]+=diff;
                            k++;
                        }
                    }
                }
            }
            for(x=0;x<r;x++){
                for(y=0;y<=c-X;y++){
                    if(A[x][y]==B[x][y]){
                        continue;
                    }
                    else{
                        diff=B[x][y]-A[x][y];
                        A[x][y]+=diff;
                        k=1;
                        while(k<X){
                            A[x][y+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(consadd(A,B,r,c)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}