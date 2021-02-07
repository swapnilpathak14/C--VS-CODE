#include<iostream>
using namespace std;
bool poweroftwo(int n){
    return (n && !(n&(n-1))); //if n&(n-1) is 0 it will become true from the not(!) used before
}
//we used n before && becasue of the "corner case" where n is 0.
int main(){
    cout<<poweroftwo(16)<<endl;
    return 0;
}