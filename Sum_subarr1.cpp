#include <iostream>
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
    
    for (int x = 0; x < n; x++)
    {
        int sum = 0; //initialize sum from zero
        for (int y=x; y<n; y++)
        {
            
            sum+=arr[y];
            cout<<sum<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}