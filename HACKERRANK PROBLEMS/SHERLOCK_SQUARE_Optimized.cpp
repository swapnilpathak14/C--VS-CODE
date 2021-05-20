#include <iostream>
#include <cmath>
using namespace std;
int sherlock(int n, int m)
{
    int count = 0;
    int y = 1;
    while (y * y < n)
    {
        y++;
    }
    while (y * y <= m)
    {
        count++;
        y++;
    }

    return count;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << sherlock(n, m) << "\n";
    }
}