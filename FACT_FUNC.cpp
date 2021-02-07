#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int x=1;x<=n;x++){
        factorial *=x;
    }
    return factorial;
   
}
int main(){
    int a;
    cin>>a;
    int ans=fact(a);
    cout<<ans<<endl;
    return 0;
}
