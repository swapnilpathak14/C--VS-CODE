#include <iostream>
#include <cmath>
using namespace std;
long fact(long n)
{
    long factorial = 1;
    for (long x = 1; x <= n; x++)
    {
        factorial *= x;
    }
    return factorial;
}

int main()
{

    int t;
    cin >> t;
    for (int x = t; x >= 1; x--)
    {
        long n, r;
        cin >> n >> r;

        long ans = (fact(n) / fact(n - r));
        cout << ans << endl;
    }

    //code
    return 0;
}