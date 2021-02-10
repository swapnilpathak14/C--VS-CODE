#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int hr(string mt, int t)
{
    int mh;
    mh = 10 * (mt[0 + t] - '0') + 1 * (mt[1 + t] - '0');
    if (mt[6 + t] == 'P')
    {
        if (mh != 12)
            mh += 12;
    }
    if (mt[6 + t] == 'A')
    {
        if (mh == 12)
            mh -= 12;
    }
    return mh;
}
int cm(string mt, int t)
{
    int mm;
    mm = 10 * (mt[3 + t] - '0') + (mt[4 + t] - '0');
    return mm;
}

int main()
{
    long long t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string mt;
        getline(cin, mt);
        int mh = hr(mt, 0);
        int mm = cm(mt, 0);
        
        long long n;
        cin >> n;
        cin.ignore();
        string res = "";
        while (n--)
        {
            string s;
            getline(cin, s);
            int sh = hr(s, 0);
            int sm = cm(s, 0);
            int eh = hr(s, 9);
            int em = cm(s, 9);

            
            if ((sh > mh) || (eh < mh))
            {
                res.push_back('0');
            }
            else if (sh == mh && sm > mm)
                res.push_back('0');
            else if (eh == mh && em < mm)
                res.push_back('0');
            else
                res.push_back('1');
        }
        cout << res << "\n";
    }
    return 0;
}