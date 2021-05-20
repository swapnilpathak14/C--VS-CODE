#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = x; y < n; y++)
        {
            if (arr[y] < arr[x])
            {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    int count = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
            if (arr[x] == arr[x + 1])
            {
                count++;
                x = x + 2; //to skip the elements of the current pair
            }
            else
            {
                x++;
            }
        }
    }
    cout << count << endl;
}