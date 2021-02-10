#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    
    int minno=INT_MAX;
    for(int y=0;y<n;y++){
        int arr[y];
        cin>>arr[y];
        if(arr[y]<minno){
            minno=arr[y];
        }
        
    }
    cout<<minno<<endl;
    
    

}
