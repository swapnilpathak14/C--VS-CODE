#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=false;
    for(int x=0;x<n;x++){
        if(arr[x]==arr[n-1-x]){
            check=true;
            continue;
        }
        
    }
    if(check==false)
    {
        cout << "Not a Palindrome"<<endl;
    }
    else{
        cout<<"Word is a Palindrome"<<endl;
    }
}