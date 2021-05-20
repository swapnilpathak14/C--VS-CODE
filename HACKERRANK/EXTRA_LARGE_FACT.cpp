#include<iostream>


using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int x=1;x<=n;x++){
        fact=fact*x;
    }
    cout<<fact<<endl;
}