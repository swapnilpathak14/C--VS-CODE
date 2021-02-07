#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int sp=0;
    int ep=n;   //define starting point and ending point
    for(sp=0;sp<=ep;sp++){
        int mid=(sp+ep)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            ep=mid-1;
        }
        else{
            ep=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;

    return 0;


}

