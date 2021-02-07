#include<iostream>
using namespace std;
int raisedpow(int n,int p){
    if (p == 0)
    {
        return 1;
    }
    int ans=raisedpow(n,p-1);
    
    return ans*n;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<raisedpow(n,p)<<endl;
}