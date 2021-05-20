#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //year
    if(n<1918){
        if(n%4==0){
            cout<<"12.09."<<n<<endl;
        }
        else{
            cout<<"13.09."<<n<<endl; //not a Leap Year
        }
    }
    if(n==1918){
        cout<<"26.09."<<n<<endl;

    }
    if(n>1918){
        if(n%400==0){
            cout<<"12.09."<<n<<endl;
        }
        else if(n%4==0 && n!=100){
            cout<<"12.09."<<n<<endl;
        }
        else{
            cout<<"13.09."<<n<<endl;
        }
    }
    return 0;
}