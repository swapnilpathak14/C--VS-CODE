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
    int counter = 0;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n - 1; x++)
        {
            if (arr[x] > arr[x + 1])
            {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
                counter++;
            }
        }
    }
    cout << "Array is sorted in " << counter << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n - 1] << endl;
}
