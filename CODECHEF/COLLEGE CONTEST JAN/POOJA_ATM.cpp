#include <iostream>
using namespace std;
int main()
{
    int n;
    float k;
    cin >> n>> k;
    if (n >= k - 0.5)
    {
        cout << k;
    }
    else
    {
        if (n % 5 == 0)
        {
            cout << k - n - 0.5;
        }
        else
        {
            cout << k;
        }
    }
    return 0;
}