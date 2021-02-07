#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int x=0;x<n1;x++){
        a[x]=arr[l+x]; //store in the original array
    }
    for(int y=0;y<n2;y++){
        b[y]=arr[mid+1+y];
    }
    //create pointers
    int x=0;
    int y=0;
    int k=l;
    while(x<n1 && y<n2){
        if(a[x]<b[y]){
            arr[k]=a[x]; //will get stored in orig array
            k++;x++;
        }
        else{
            arr[k]=b[y];
            k++;y++;
        }
    }
    //case when one pointer reaches end and the other pointer is still there
    while(x<n1){
        arr[k]=a[x];
        k++;x++;
    }
    while(y<n2){
        arr[k]=b[y];
        k++;y++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        
        int mid=(l+r)/2;
        mergesort(arr,l,mid); //recursive function call
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r); //we have to merge again
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    mergesort(arr,0,n);
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
    return 0;
}