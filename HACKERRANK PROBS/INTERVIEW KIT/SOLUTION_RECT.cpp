#include <iostream>

using namespace std;

int main()
{

    int n, count = 0;

    cin >> n;
    int m;
    cin>>m;

    while (n--)
    {

        long long int w, h;

        

        cin >> w >> h;

        if (w/w+1 == h/h+1)

            

            count++;
    }

    cout << count << endl;

    return 0;
}