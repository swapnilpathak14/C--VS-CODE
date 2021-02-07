#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1; //initialize
    for(int x=1;x<=n;x++){
        factorial=factorial*x;
    }
    return factorial;
}



int main(){
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}