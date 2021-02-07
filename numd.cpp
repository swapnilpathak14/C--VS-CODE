#include <iostream>
using namespace std;
int main()
{

    for (int x = 1; x <= 100; x++)
    {
        if (x % 3 == 0)
        {
            continue;
        }
        cout << x << endl;
    }
    return 0;
}