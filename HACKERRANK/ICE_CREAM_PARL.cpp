#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        long long int m;
        cin >> m;
        long long int n;
        cin >> n;
        int arr[n];
        for (int x = 1; x <= n; x++)
        {
            cin >> arr[x];
        }
        for (int x = 1; x <= n; x++)
        {
            for (int y = x + 1; y <= n; y++)
            {
                if (arr[x] + arr[y] == m)
                {
                    cout << x << " " << y << endl;
                }
            }
        }
    }
}