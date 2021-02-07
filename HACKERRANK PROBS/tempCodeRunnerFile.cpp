#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    string y;
    int p;
    int movie=0;
    for(int x=i;x<=j;x++){
        y=to_string(x);
        reverse(y.begin(),y.end());
        p=stoi(y);
        if((i-p)%k==0){
            movie++;
        }
    }
    cout<<movie<<endl;
