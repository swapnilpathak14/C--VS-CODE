#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    int b = 0;
    int b1 = 0; //actual bill for anna
    int sum = 0;
    int l;
    cin >> l;

    for (int x = 0; x < n; x++)
    {
        sum += arr[x];
        b = sum / 2;
        
        b1 = (sum-arr[k]) / 2;
        
    }
    if (b1 == l)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << b-b1 << endl;
    }
}