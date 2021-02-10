#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int y = 0; y < n; y++)
        {
            cin >> arr[y];
        }
        long long int mind = 0;
        long long int maxd = 0;
        long long int sum = 0;
        mind = arr[0];
        maxd = arr[0];
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] > maxd)
            {
                maxd = arr[i];
            }
            if (arr[i] < mind)
            {
                mind = arr[i];
            }
        }
        sum = maxd - mind;
        sum = sum * 2;
        cout << sum << endl;
    }
    return 0;
}