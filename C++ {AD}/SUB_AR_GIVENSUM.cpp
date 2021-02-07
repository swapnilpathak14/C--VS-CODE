#include<iostream>
using namespace std;
int main(){
    int n;
    int S; //For given Sum
    cin>>n>>S;
    int arr[n];

    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int y =0;
    int x=0;
    int st=0;
    int en=0; //end point
    int sum=0; //sum initialiazation

    while (y < n && sum + arr[y] <= S){

        
        sum = sum + arr[y];
        y++;
    }
        
    
    if(sum==arr[y]){
        cout<<x+1<<" "<<y<<endl;;
        return 0; //if this condition gets satisfied we don't need to run the code further and we can terminate here.

    }
    while(y<n){
        sum+=arr[y];
        while(sum>S){
            sum -= arr[x];
            x++;
        }
        
    
    if(sum==S){
        st = x+1;
        en = y+1;
        break;

    }
        y++;
    }
    cout<<st<<" "<<en<<endl;
}