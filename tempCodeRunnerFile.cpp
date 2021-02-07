#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }

    const int N=1e6+2; //used constant, so that in future no one can change the value of N
    int idx[N];
    for(int y=0;y<N;y++){
        idx[y]=-1;
    }

    int minno = INT_MAX;

    for(int x=0;x<n;x++){
        if(idx[arr[x]] != -1){
            minno=min(minno,idx[arr[x]]);
        }
        else{
            idx[arr[x]]=x; //you can store any value since we only want to deal with the array of index
        }
    }
    
    //Suppose we don't find the value of minno even after we reach our last iteration till N. 
    //then return -1 as we were not able to find the minimum value of the index of repeating element
    if(minno==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minno+1<<endl;
    }
    
    return 0;
}

