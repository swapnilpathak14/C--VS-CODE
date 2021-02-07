#include<iostream>
using namespace std;
int main(){
    int p,i,m,r;
    cin>>p>>i>>m>>r;
    int sum=0;
    int toy=0;
    for(int x=i;x<=p;x++){
        
        p=p-i;
        
        while(sum<=r){
            sum = sum + p;
            toy++;
        }
        cout << toy + 1 << endl;
    }
    
}