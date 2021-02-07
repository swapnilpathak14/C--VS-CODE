#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "ASCIIKLFDLGH";
    cout << 'a' - 'A' << endl; //'a' is 32 places ahead of capital A
    for (int x = 0; x <= s.size(); x++)
    {
        if (s[x] >= 'A' && s[x] <= 'Z')
        {
            s[x] += 32; //s[x]=s[x]+32
        }
    }
    cout << s << endl;
}
