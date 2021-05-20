#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long long int count = 0;
    for (long long int x = 0; x < s.size(); x++)
    {
        if (s[x] == 'a')
        {
            count++;
        }
    }
    count = count * (n / s.size());
    for (long long int x = 0; x < n % s.size(); x++)
    {
        if (s[x] == 'a')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
