#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1; //initialize with 1
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout<<count<<" ";
            count++;
        }
        cout << endl;
    }
}