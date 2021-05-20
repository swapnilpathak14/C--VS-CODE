#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int x=0;x<n;x++){
        cin>>s[x];
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    int sum=0;
    for(int x=0;x<n-m+1;x++){
        
        for(int y=x;y<x+m;y++){
            sum+=s[y];
        }
        if(sum==d){
            count++;
                
        }
        sum = 0;
    }
    cout<<count<<endl;

}
