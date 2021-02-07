#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int sp=0; //defined a starting point in the array and initialized
    int ep=n;
    while(sp<=ep){
        int mid=(sp+ep)/2;

        if(arr[mid]==key){
            return mid;    //to return the middle element from the set of elements in array
        }
        else if(arr[mid]>key)
        {
            ep=mid-1;
        }
        else
        {
            ep=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr, n, key)<<endl; //it will only show output if the arrays are sorted

    return 0;
}
