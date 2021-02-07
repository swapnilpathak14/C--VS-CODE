#include<iostream>
using namespace std;
int setbit(int n, int pos){
    return (n|(1<<pos)); //OR with n
}
int main(){
    cout<<setbit(5,1)<<endl;
}