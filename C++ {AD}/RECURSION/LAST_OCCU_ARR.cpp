#include<iostream>
using namespace std;
int lastocc(int arr[],int n,int i, int key){
    if (i == n)
    {
        return -1; //base condition
    }
    int restarr=lastocc(arr,n,i+1,key);
    
    if(restarr != -1){
        return restarr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1; //means that we did not find the key
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    int key;
    cin >> key;
    int i = 0;
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    cout << lastocc(arr, n, i, key) << endl;
}