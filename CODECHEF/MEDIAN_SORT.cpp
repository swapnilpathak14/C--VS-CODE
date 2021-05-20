#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    ll n, q;
    cin >> t >> n >> q;
    while (t-- != 0)
    {
        vector<ll> arr;

        cout << "1 2 3" << endl;

        ll size = 3;
        ll p;
        cin >> p;
        if (p == 2)
        {
            arr.push_back(1);
            arr.push_back(2);
            arr.push_back(3);
        }
        else if (p == 3)
        {
            arr.push_back(1);
            arr.push_back(3);
            arr.push_back(2);
        }
        else
        {
            arr.push_back(2);
            arr.push_back(1);
            arr.push_back(3);
        }
        for (ll i = 4; i <= (n); i++)
        {
            ll a = 0;
            ll b = size - 1;
            while (a < b)
            {
                ll mid = a + ((b - a) / 2);
                cout << arr[mid] << " " << arr[mid + 1] << " " << (i) << endl;
                cin >> p;
                if (p == arr[mid])
                {
                    b = mid;
                }
                else if (p == arr[mid + 1])
                {

                    a = mid + 1;
                }
                else
                {
                    arr.insert(arr.begin() + mid + 1, i);
                    size++;
                    break;
                }
            }
            if (size != i)
            {
                if (a == 0)
                {
                    arr.insert(arr.begin(), i);
                }
                else
                {
                    arr.push_back(i);
                }
                size++;
            }
        }
        for (auto zzz : arr)
        {
            cout << zzz << " ";
        }
        cout << endl;
        cin >> p;
        if (p == -1)
        {
            break;
        }
    }
}