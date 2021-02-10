#include <iostream>
#include <cmath>
using namespace std;

long fa(long a)
{
    long f = 1;
    for (long i = 1; i <= a; i++)
        f *= i;
    return f;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        cout << (fa(a) / fa(a - b)) << endl;
    }
    return 0;
}