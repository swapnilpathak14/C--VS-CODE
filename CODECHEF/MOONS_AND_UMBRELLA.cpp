#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void moonsumb()
{
    int n, x, y;
    int count = 0;
    int res = 0;
    string s;
    cin >> x >> y >> s;
    int i, j;
    n = s.length();
    for (i = 0; i < n; i++)
    {
        if (s[i] == '?')
            count++;
    }
    if (count == n || count == n - 1)
    {
        cout << "0";
        return;
    }
    int k;
    for (k = 0; k < n - 1; k++)
    {
        if (s[k] != '?')
            break;
    }
    if (k == 0)
        k++;
    i = k;
    while (i < n - 1)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] != s[i + 1] && s[i + 1] != '?')
            {
                if (s[i - 1] == 'J')
                    res += y;
                else
                    res += x;
            }
            else if (s[i - 1] != s[i + 1] && s[i + 1] == '?')
            {
                j = i + 2;
                while (s[j] == '?' && j < n)
                {
                    j++;
                }
                if (j == n)
                {
                    break;
                }
                if (s[i - 1] != s[j])
                {
                    if (s[i - 1] == 'J')
                        res += y;
                    else
                        res += x;
                }
                i = j;
            }
        }
        i++;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == 'J' && s[i + 1] == 'C')
            res += y;
        else if (s[i] == 'C' && s[i + 1] == 'J')
            res += x;
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        cout << "Case #" << j << ": ";
        moonsumb();
        cout << endl;
    }
}