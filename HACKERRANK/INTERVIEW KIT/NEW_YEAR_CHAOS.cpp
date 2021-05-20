#include <bits/stdc++.h>
using namespace std;
// Complete the minimumBribes function below.
void minimumBribes(int arr[], int n)
{
    int count = 0;
    int bribe = 0;
    bool flag = true;
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
            if (arr[x] > arr[y])
            {
                count++;
                bribe += 1;
            }
            if (count > 2)
            {
                flag = false;
                cout << "Too chaotic" << endl;
                return;
            }
        }
        count = 0;
    }
    if (flag)
    {
        cout << bribe << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n;

        cin >> n;
        int arr[n];
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        minimumBribes(arr, n);
    }
}