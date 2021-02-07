//implement a simple calculator
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Input 3 numbers: "<<endl;
    cin>>n1>>n2>>n3;

    char oper;
    cout<<"Input the operator"<<endl;
    cin>>oper;


    switch(oper)
    {
    case '*':
       cout<<n1*n2*n3<<endl;
       break;    
    default:
       cout<<"I can perform more operations!"<<endl;
       break;
    }
    return 0;
}