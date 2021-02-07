#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0; //initialize 
    for(int x=1;x<=n;x++){
        sum=sum+x;
        cout<<sum<<endl;
    }
    return 0;
}
