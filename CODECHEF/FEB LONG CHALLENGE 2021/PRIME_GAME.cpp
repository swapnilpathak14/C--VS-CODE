#include <bits/stdc++.h>
using namespace std;

const int m = 1000000;
int pr[m + 1];

void primesieve()
{
    bool prime[m + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= m; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j <= m; j += i)
            {
                prime[j] = false;
            }
        }
    }

    pr[0] = pr[1] = 0;
    for (int i = 2; i <= m; i++)
    {
        pr[i] = pr[i - 1];
        if (prime[i])
            pr[i]++;
    }
}

int count(int x){
    return pr[x];
}


int main()
{
    
    cin.tie(NULL);
    cout.tie(NULL);

    primesieve();
    long long int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (count(x) > y)
            cout << "Divyam"
                 << "\n";
        else
            cout << "Chef"
                 << "\n";
    }
    return 0;
}

