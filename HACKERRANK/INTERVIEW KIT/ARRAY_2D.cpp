#include<iostream>
using namespace std;
int main()
{

    int arr[6][6];
    for (int x = 0; x < 6; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            cin >> arr[x][y];
        }
    }
    int maxsum = -63;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = arr[i + 1][j + 1];
            for (int k = 0; k < 3; k++)
            {
                sum += arr[i][j + k];
                sum += arr[i + 2][j + k];
            }
            if (sum > maxsum)
                maxsum = sum;
        }
    }

    cout << maxsum;
}
