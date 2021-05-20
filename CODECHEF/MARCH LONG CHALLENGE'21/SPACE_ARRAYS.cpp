#include <bits/stdc++.h>
using namespace std;
void spacearr(int n, int arr[]){
    
    int flag = 1;
    int count = 0;
    
    sort(arr, arr + n);

    for (int x = 0; x < n; x++)
    {
        if (arr[x] > x + 1)
        {
            flag = 2;
            break;
        }

        count += (x + 1 - arr[x]);
    }

    if (flag == 2)
    {
        cout << "Second\n";
    }
    else
    {
        if (count % 2 == 0){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }        
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        spacearr(n,arr); 
    }
    return 0;
}