#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cin >> n;
        int arr[n];
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        int current = 0;
        int ans = 0;
        for (int x = 1; x < n; x++) //you can also traverse from 1 to n
        {
            current = arr[x];
            int y = x - 1;
            while (arr[y] > current && y >= 0)
            {
                arr[y + 1] = arr[y];
                y--;
                ans++;
            }
            arr[y + 1] = current;
        }
        cout << ans << endl;
    }
    
}
