#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;

    for(int x=1;x<=n;x++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;

}