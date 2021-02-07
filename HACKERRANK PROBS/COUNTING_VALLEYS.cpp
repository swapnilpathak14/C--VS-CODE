#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    string path;
    cin>>path;
    int valley=0;
    int count=0;
    for(int x=0;x<n;x++){
        
        if(path[x]=='D'){
            if(count==0){
                valley++;
            }
            count--;
        }
        else{
            count++;
        }
        
    }
    cout<<valley<<endl;
    return 0;
    
    
}