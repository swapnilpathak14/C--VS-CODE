#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    int idx[n];
    if (d <= n)
    {
        d = d % n;
    }
    if (d == 0)
    {
        return arr[n];
    }
    for (int x = 0; x < n; x++)
    {

        idx[(n + x - d) % n] = arr[x];
    }
    for (int x = 0; x < n; x++)
    {
        cout << idx[x] << " ";
    }
}
