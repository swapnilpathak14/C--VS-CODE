#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int x = 1; x <= n; x++)
    {

        for (int y = n-x; y >= 1; y--)
        {
            cout << "  ";
        }
        for (int y = 1; y <= 2*x-1; y++)
        {
            cout << "* ";
        }
       
        cout << endl;
    }
    for (int x = n; x >= 1; x--)
    {

        for (int y = n - x; y >= 1; y--)
        {
            cout << "  ";
        }
        for (int y = 1; y <= 2 * x - 1; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}