#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int ap[m];
    int apcnt = 0;
    int ora[n]; 
    int orcnt = 0;

    


    for (int i = 0; i < m; i++)
    {
        cin >> ap[i];
        if (a + ap[i] >= s && a + ap[i] <= t)
            apcnt++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> ora[i];
        if (b + ora[i] >= s && b + ora[i] <= t)
            orcnt++;
        
    }
    cout << apcnt << endl;
    cout << orcnt << endl;
    return 0;
}