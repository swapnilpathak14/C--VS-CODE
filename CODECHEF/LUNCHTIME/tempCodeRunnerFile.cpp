#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.size();
        map<long long, long long> str;
        for (long long x = 0; x < n; x++)
            str[s[x]]++;
        long long st = 0, en = 0;
        bool flag = 0;
        for (auto it = str.begin(); it != str.end(); it++)
        {
            long long x = it->second;
            if (x == 1)
                st++;
            if (x > 1)
            {
                en += x / 2;
                if (x % 2)
                    en--;
            }
            
        }
        
        if (st <= en)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}