#include<iostream>
using namespace std;

int height(int n)
{

    int hgt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            hgt= hgt*2;
        if (i % 2 == 0)
            hgt=hgt+1;
    }
    return hgt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    return 0;
}