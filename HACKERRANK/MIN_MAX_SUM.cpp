#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int arr[5];
    for(int x=0;x<5;x++){
        cin>>arr[x];
    }
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (arr[y] < arr[x])
            {
                int temp = arr[y];
                arr[y] = arr[x];
                arr[x] = temp;
            }
        }
    }
    int minno=INT_MAX;
    int maxno=INT_MIN;
    for(int x=0;x<5;x++){
        minno=min(minno,arr[x]);
        maxno=max(maxno,arr[x]);
    }
    int summin=0;
    int summax=0;
    int totalsum=0;
    for(int x=0;x<5;x++){
        totalsum+=arr[x];
        summin=totalsum-maxno;
        summax=totalsum-minno;
    }
    cout<<summin<<" "<<summax<<endl;
    
}