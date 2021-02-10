#include<iostream>
#include<cmath>
using namespace std;
 int sum(int n){
     int natural_sum=0;
     for(int x=1;x<=n;x++){
         natural_sum+=x;
     }
     return natural_sum;
 }

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;

}