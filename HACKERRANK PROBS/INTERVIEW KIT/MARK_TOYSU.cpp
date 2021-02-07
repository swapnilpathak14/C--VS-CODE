#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin>> n >> k;
    vector<int> arr(n);

    int count = 0;
    long long int toy = 0;
    for (int x = 0; x < arr.size(); x++)
    {
        cin >> arr[x];
    }
    sort(arr.begin(), arr.end());
    for (int x = 0; x < arr.size(); x++)
    {
        toy += arr[x];
        if (toy <= k)

            count++;
    }
    cout<<count<<endl;
}