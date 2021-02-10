#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h;
    cin>>h;
    int k=n;
    for(int x=1;x<=h;x++){
        k=k+x-1;
        for(int y=1;y<=x;y++){            
            cout <<k<< " ";
            n++;
            k--;
        }
        k=n;
        cout<<endl;
    }
}