#include<iostream>
using namespace std;
void primefactor(int n){
    int spf[100]={0};
    for(int x=2;x<=n;x++){
        spf[x]=x;
    }
    for(int x=2;x<=n;x++){
        if(spf[x]==x){
            for(int y=x*x;y<=n;y+=x){
                if(spf[y]==y){
                    spf[y]=x;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" "<<endl;
        n=n/spf[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}