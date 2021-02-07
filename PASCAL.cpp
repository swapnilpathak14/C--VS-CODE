#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int x=2;x<=n;x++){
        factorial=factorial*x;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    for(int x=0;x<n;x++){
        for(int y=0;y<=x; y++){
            int ans= fact(x)/(fact(y)*fact(x-y));
            cout<<ans<<" ";
        }
        cout<<endl; //after every row is finished, put line break
    }
    return 0;
}