#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    long long int h = 0;
    for (int x = 1; x <= t; x++)
    {
        long long int b, w;
        cin >> b >> w;
        long long int bc, wc, z;
        cin >> bc >> wc >> z;
        h = b * min(bc, wc + z) + w * min(wc, bc + z);
        cout << h << endl;
    }
}