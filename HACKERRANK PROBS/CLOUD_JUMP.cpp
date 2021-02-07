#include <iostream>
using namespace std;
int cloudjump(int n, int arr[])
{
    int mini = 0;

    for (int x = 0; x < n - 1; x++, mini++)
    {
        if (x + 2 < n && arr[x + 2] == 0)
        {

            x++;
        }
    }
    return mini;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    cout << cloudjump(n, arr) << endl;
}