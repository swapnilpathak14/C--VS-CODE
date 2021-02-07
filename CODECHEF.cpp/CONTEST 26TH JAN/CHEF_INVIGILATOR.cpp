#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int count=0;
    for(int x=0;x<n;x++){
        for(int y=x;y<n;y++){
            if(arr[x]>arr[y]){
                int temp=arr[x];
                arr[x]=arr[y];
                arr[y]=temp;
                count++;
            }
        }
        cout << count << endl;
    }
    

}