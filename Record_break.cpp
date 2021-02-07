#include<iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int x=0;x<n;x++){
         cin>>arr[n];
     }
     int recb=0;
     int mx=0;
     for(int y=0;y<n;y++){
         if(arr[y]>mx && arr[y]>arr[y+1]){
             recb++;
         }
         mx=max(mx,arr[y]);
     }
     cout<<recb<<endl;
 }