#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int original=n;

    while(n>0){

        int lastdigit=n%10;
        sum+=pow(lastdigit,3);

        //After adding, we will have to remove the last digit from n//
        n=n/10;

    }
    if(sum==original){
        cout<<"ARMSTRONG NUMBER"<<endl;
    }
    else{
        cout<<"NIL ARMSTRONG"<<endl;
    }
    return 0;
}