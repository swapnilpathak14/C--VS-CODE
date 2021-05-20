#include<iostream>
using namespace std;
bool Coprime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int L, R;
        cin >> L >> R;
        R++;
        
        while (!Coprime(R))
        {
            R++;
        }
        cout << R << '\n';
    }
    return 0;
}
