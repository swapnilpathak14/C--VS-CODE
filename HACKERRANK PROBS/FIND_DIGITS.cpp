#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cin>>n;
        int k=n;
        int count=0;
        for(int k=n;k>0;k=k/10){
            if (k%10 !=0 && n%(k%10)==0){
                count++;
            }

        }
        cout<<count<<endl;
    }
}