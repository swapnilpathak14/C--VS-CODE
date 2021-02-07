#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n){
    for(int x=2;x<=sqrt(n);x++){
        if(n%x==0){
            return false;
        }
    }
    return true;     //if the loop is completed successfully, it means it is a prime number

}
int main(){
    int a,b;
    cin>>a>>b;
    for(int x=a;x<=b;x++){
        if (prime(x)==true){
            cout<<x<<endl;
        }
        
    }
    return 0;

}