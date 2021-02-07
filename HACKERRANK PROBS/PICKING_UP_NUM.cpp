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
        for (int y = x; y < n; y++)
        {
            if (arr[y] < arr[x])
            {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    int curr = 0;
    int ans = 0;
    for (int x = 1; x < n; x++)
    {
        if (abs(arr[x] - arr[x + 1]) <= 1)
        {
            curr++;
        }
    }
    cout << ans + 1 << endl;
}
