#include<iostream>
using namespace std;
int main(){
    char arr[100]="Apple";
    for(int x=0;x<100;x++){
        if(arr[x]!='\0'){
            cout<<arr[x]<<endl;
        }
    }
}