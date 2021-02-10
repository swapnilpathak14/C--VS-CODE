#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    int current =0;
    for (int x=0;x<n;x++) //you can also traverse from 1 to n
    {
        if(arr[x]>arr[x+1]){
            current = arr[x + 1];
            int y = x;

            while (arr[y] > current && y >= 0)
            {
                arr[y + 1] = arr[y];
                y--;
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" ";
                    
                }
                cout << endl;
            }
            arr[y + 1] = current;
        }       
    }
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
    
    
}
