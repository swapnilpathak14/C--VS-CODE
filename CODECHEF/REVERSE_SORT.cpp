#include<bits/stdc++.h>
using namespace std;
void reversesort(int x, int y, int *arr)
{
    int p = x;
    int q = y;

    while (p <= q)
    {
        swap(arr[p], arr[q]);
        p++;
        q--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    int count = 0;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long ans = 0;
        for (int x = 0; x < n - 1; x++)
        {
            int minidx = n - 1;
            int miniterm = INT_MAX;

            for (int y = n - 1; y >= x; y--)
            {
                if (arr[y] < miniterm)
                {
                    miniterm = arr[y];
                    minidx = y;
                }
            }
            reversesort(x, minidx, arr);
            ans += minidx - x + 1;
        }

        count++;

        cout << "Case #" << count << ':' << " " << ans << endl;
    }

    return 0;
}