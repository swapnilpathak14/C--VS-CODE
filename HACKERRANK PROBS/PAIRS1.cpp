#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long arr[100000];
bool binarysearch(int sp, int ep, long long key)
{
    int mid;
    //define starting point and ending point
    while (sp <= ep)
    {
        mid = (sp + ep) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        if (arr[mid] < key)
        {
            sp = mid + 1;
        }
        else
        {
            ep = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n;
    long long k, count = 0;
    cin >> n >> k;
    int x;
    for (x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    sort(arr, arr + n);
    for (x = 0; x < n - 1; x++)
    {
        if (binarysearch(x + 1, n - 1, arr[x] + k))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
