#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
bool prime(long long int n)
{

    for (long long int x = 2; x * x <= n; x++)
    {
        if (n % x == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    int arr[1000001];
    scanf("%lld", &t);
    long long int count = 0;

    arr[0] = arr[1] = 0; //CORNER CASE as 0 and 1 are not prime
    for (long long int x = 2; x <= 1000001; x++)
    {
        if (prime(x))
        {
            count++;
        }
        arr[x] = count;
    }

    while (t--)
    {
        long long int x, y;
        scanf("%lld%lld", &x, &y);
        if (arr[x] <= y)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Divyam\n";
        }
    }
    return 0;
}