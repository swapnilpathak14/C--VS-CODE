#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            cin >> arr[x][y];
        }
    }
    int reg = 0;

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            if (arr[x][y] == 1)
            {
                if (arr[x][y] == arr[x + 1][y] || arr[x][y] == arr[x][y + 1] || arr[x][y] == arr[x - 1][y - 1] || arr[x][y] == arr[x + 1][y + 1] || arr[x][y] == arr[x][y - 1] || arr[x][y] == arr[x - 1][y] || arr[x][y] == arr[x + 1][y - 1] || arr[x][y] == arr[x - 1][y + 1])
                {
                    reg++;
                }
            }
        }
    }

    cout << reg << endl;
}