#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
    int n;
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x1>x2){
        int temp = x1;
        x1 = x2;
        x2 = temp;
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    while(x1<x2){
        x1+=v1;
        x2+=v2;
    }
    


    if (x1== x2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}