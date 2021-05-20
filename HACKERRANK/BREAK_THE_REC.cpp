#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin>>arr[x];
    }

    int count_s = 0;
    int countm = 0;
    int minsc = arr[0];
    int maxsc = arr[0];
    for (int y = 0; y < n; y++)
    {
        if (arr[y] > maxsc)
        {
            

            count_s++;
            maxsc = arr[y];
        }

        if (arr[y] < minsc)
        {
            
            countm++;
            minsc = arr[y];
        }
    }
    cout << count_s << " " << countm << endl;
}
