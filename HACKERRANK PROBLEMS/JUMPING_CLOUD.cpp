#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int arr[n];
    for (long long int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    int e = 100;

    long long int x;
    for (x = 0; x < n; x += k)
    {
        if (arr[x] == 1)
        {
            e = e - 3;
        }
        else if (arr[x] == 0)
        {
            e = e - 1;
        }
    }
    cout << e << "\n";
}