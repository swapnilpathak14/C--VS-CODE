#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int x = 2; x < n; x++)
    {
        if (n % x == 0)
        {
            cout << n << " Non-prime \n"
                 << endl;
            break;
        }
    }
    return 0;
}