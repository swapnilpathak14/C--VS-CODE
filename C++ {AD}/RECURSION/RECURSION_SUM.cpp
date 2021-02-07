#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1); //recurvise function that will call itself uptill end point condition.
    return n+Sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
}