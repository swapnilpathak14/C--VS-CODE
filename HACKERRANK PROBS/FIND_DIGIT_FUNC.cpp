#include<iostream>
using namespace std;
int findigit(int n){
    int count=0;
    int d;
    for(int x=n;x>0;x=x/10){
        d=x%10;
        if(d!=0 && n%d==0){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        cout<<findigit(n)<<endl;
    }
}