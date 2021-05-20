#include <iostream>
using namespace std;
int main()
{
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;
    int fine;
    if (d1 == d2 && m1 == m2 && y1 == y2 || d1 > d2 && m1 == m2 && y1 < y2 || d1 < d2 && m1 == m2 && y1 < y2)
    {
        fine = 0;
        cout << fine << "\n";
    }
    else if (d1 < d2 && m1 == m2 && y1 == y2 || d2 < d1 && m1 > m2 && y1 < y2 || d1 < d2 && m1 < m2 && y1 == y2)
    {
        fine = 0;
        cout << fine << "\n";
    }
    else if (d2 < d1 && m1 < m2 && y1 == y2)
    {
        fine = 0;
        cout << fine << "\n";
    }
    else if (d2 < d1 && m1 == m2 && y1 == y2)
    {
        fine = 15 * (d1 - d2);
        cout << fine << "\n";
    }
    else if (d2 == d1 && m1 < m2 && y1 == y2 || d2 < d1 && m1 > m2 && y1 == y2 || d2 > d1 && m1 > m2 && y1 == y2)
    {
        fine = 500 * (m1 - m2);
        cout << fine << "\n";
    }
    else
    {
        fine = 10000;
        cout << fine << "\n";
    }
    return 0;
}