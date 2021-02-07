#include<iostream>

using namespace std;
int main(){
    int b,n,m=0;
    cin>>b>>n>>m;
    int keyb[n];
    int usb[m];
    for(int x=0;x<n;x++){
        cin>>keyb[x];
    }
    for(int y=0;y<m;y++){
        cin>>usb[y];
    }
    int maxbudget=-1;
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if (keyb[x] + usb[y] > b)
            {
                break; //it is failing some of the test cases instead remove this break loop statement
            }
            if(keyb[x]+usb[y]<=b && keyb[x]+usb[y]>maxbudget){
                maxbudget=keyb[x]+usb[y];
            }
            
        }
        
    }
    cout << maxbudget<<endl;
   
    
    
}