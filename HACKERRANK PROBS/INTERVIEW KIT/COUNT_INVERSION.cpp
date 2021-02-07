#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int inv = 0;
    for (int x = 1; x <= t; x++)
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
            for (int y = x; y < n; y++)
            {
                if (arr[x] > arr[y])
                {
                    inv++;
                }
            }
        }
        cout << inv << endl;
    }
}