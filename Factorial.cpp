#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pro=1;
    for(int x=1;x<=n;x++){
        pro=pro*x;
        cout<<pro<<endl;
    }
    return 0;
}