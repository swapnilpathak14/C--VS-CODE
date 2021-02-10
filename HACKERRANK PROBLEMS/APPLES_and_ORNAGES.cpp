#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t; //s=starting point of Sam's house   t=ending point of Sam's house location
    int a, b;
    //location of apple tree and orange tree
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int arr[m];
    int ora[n];

    int count_apple = 0;
    int count_orange = 0;
    for (int x = 0; x < m; x++)
    {
        cin >> arr[x]; //respective distance apples fall from point a
    }
    for (int y = 0; y < n; y++)
    {
        cin >> ora[y]; // respective distance oranges fall from point b
    }

    for (int x = 0; x < m; x++)
    {

        if (a + arr[x] >= s && a + arr[x] <= t)
        {
            count_apple++;
        }
    }

    for (int y = 0; y < n; y++)
    {

        if (b + ora[y] >= s && b + ora[y] <= t)
        {
            count_orange++;
        }
    }
    cout << count_apple << endl;
    cout << count_orange << endl;
}