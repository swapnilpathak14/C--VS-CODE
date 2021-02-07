#include<iostream>
#include<vector>
using namespace std;
int congrid(vector<vector<int>>&arr,int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 0;
    if (arr[i][j] == 0)
        return 0;
    else
    {
        arr[i][j] = 0;
        return 1 + congrid(arr, i + 1, j, n, m) + congrid(arr, i, j + 1, n, m) + congrid(arr, i - 1, j, n, m) + congrid(arr, i, j - 1, n, m) + congrid(arr, i + 1, j + 1, n, m) + congrid(arr, i + 1, j - 1, n, m) + congrid(arr, i - 1, j + 1, n, m) + congrid(arr, i - 1, j - 1, n, m);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr;
    arr.assign(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j])
            {
                ans = max(congrid(arr, i, j, n, m), ans);
            }
        }
    cout << ans;
    return 0;
}