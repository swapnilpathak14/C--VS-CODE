#include<iostream>
using namespace std;
int const m=1000000;
void primesieve(int n){
    bool prime[m+1]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int x=2;x<=n;x++){
        if(prime[x]==0){
            cout<<x<<" ";
        }
    }cout<<endl;
}
int main(){

    int n;
    cin>>n;
    primesieve(n);
    return 0;
}