#include<iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n;
    cin>>p;
    int count=0;
    int page=0;
    page=min(n/2,n/2-p/2);
    if(page>p/2){
        page=p/2;
    }

    cout<<page<<endl;
}