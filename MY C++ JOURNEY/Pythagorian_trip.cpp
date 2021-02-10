#include<iostream>
#include<cmath>
using namespace std;
bool check(int x, int y, int z){ //three parameters
     int a = max(x,max(y,z));
     int b,c;
     if(a==x){
         b=y;
         c=z;
     }
     else if(a==y){
         b=x;
         c=z;
     }
     else{
         b=y;
         c=x;
     }
     return check;
}
int main(){
    int p,q,r;
    cin>>p>>q>>r;
    if(check(p,q,r)){
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not a pythagorian triplet"<<endl;
    }
    return 0;
}