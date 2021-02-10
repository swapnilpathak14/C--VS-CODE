#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i, j;
    
    for(int x=0;x<n;x++){
        
        cin>>i>>j;
    }
    
    int count=0;
    for(int y=i;y<=j;y++){
        int digit = 0;
        if(y==7 or y%10==7){
            

            count++;
        }
    }
    
    cout<<count<<endl;
}