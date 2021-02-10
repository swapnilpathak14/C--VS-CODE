#include<iostream>
#include<algorithm>
using namespace std;
int highestdivisor(int n){
    int mins=0;
    int y;
    for(int x=1;x<=10;x++){
        if(n%x==0){
            y=max(x,mins);
        }
        
    }
    return max(y,mins);

}
int main(){
    int n;
    cin>>n;
    cout<<highestdivisor(n)<<endl;
}