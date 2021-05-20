#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int x = 1; x <= t; x++)
    {
        cout << "Case #" << x << ": ";
        ll ans = 0;
        int r, c;
        cin >> r >> c;
        vector<vector<int>> lsg(r, vector<int>(c, 0));
        for (int x = 0; x < r; x++)
            for (int y = 0; y < c; y++)
            {
                cin >> lsg[x][y];
            }

        ll count = 0;
        for (int x = 0; x < r; x++)
        {
            for (int y = 0; y < c; y++)
            {
                if (lsg[x][y] == 1)
                {
                    count = 1;
                    for (int k = y - 1; k >= 0; k--)
                    {
                        if (lsg[x][k] == 0)
                            break;

                        count++;
                        int shape = 0;
                        for (int l = x; l >= 0; l--)
                        {
                            if (lsg[l][k] == 1)
                            {
                                shape++;
                                if (shape != 1 && (shape * 2 == count || shape == 2 * count))
                                {
                                    ans++;
                                }

                                if (shape > 2 * count)
                                    break;
                            }
                            else
                                break;
                        }
                        shape = 0;
                        for (int l = x; l < r; l++)
                        {
                            if (lsg[l][k] == 1)
                            {
                                shape++;
                                if (shape != 1 && (shape * 2 == count || shape == 2 * count))
                                {
                                    ans++;
                                }

                                if (shape > 2 * count)
                                    break;
                            }
                            else
                                break;
                        }
                    }
                    ///////////////////
                    count = 1;
                    for (int k = y + 1; k < c; k++)
                    {
                        if (lsg[x][k] == 0)
                            break;

                        count++;
                        int shape = 0;
                        for (int l = x; l >= 0; l--)
                        {
                            if (lsg[l][k] == 1)
                            {
                                shape++;
                                if (shape != 1 && (shape * 2 == count || shape == 2 * count))
                                {
                                    ans++;
                                }

                                if (shape > 2 * count)
                                    break;
                            }
                            else
                                break;
                        }
                        shape = 0;
                        for (int l = x; l < r; l++)
                        {
                            if (lsg[l][k] == 1)
                            {

                                shape++;
                                if (shape != 1 && (shape * 2 == count || shape == 2 * count))
                                {
                                    ans++;
                                }

                                if (shape > 2 * count)
                                    break;
                            }
                            else
                                break;
                        }
                    }
                }
                else
                    count = 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}