#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string h, z;
        //h=hour time and z=pm or am
        cin >> h >> z;
        string h1 = h.substr(0, 2);
        int mh = stoi(h1);
        if (z[0] == 'P' && mh < 12)
        {
            mh = mh + 12;
            string m1 = to_string(mh) + h.erase(0, 2);
            string m2 = m1.erase(2, 1);
            int mh = stoi(m2);
        }
        else if (z[0] = 'A' && mh < 12)
        {
            string m3 = to_string(mh) + h.erase(0, 2);
            string m4 = m3.erase(2, 1);
            int mh = stoi(m4);
        }
        else if (z[0] == 'A' && mh == 12)
        {
            string m5 = h.erase(0, 3);
            int mh = stoi(m5);
        }
        else if (z[0] = 'P' && mh == 12)
        {
            string m6 = h.erase(2, 1);
            int mh = stoi(m6);
        }

        int n;
        cin >> n;
        
        int sh, eh;
        string junkWhiteSpace;
        getline(cin, junkWhiteSpace);
        for(int x=0;x<n;x++){
            
            string s;
            getline(cin, s);
            for(int i=0;i<s.length();i++){
                string s1 = s.substr(0, 2);
                int y = stoi(s1);

                if (s[6] == 'P' && y < 12)
                {
                    y = y + 12;
                    string t1 = to_string(y) + s.erase(0, 2) + s.erase(6, 2);
                    t1.erase(2, 1);
                    sh = stoi(t1);
                }
                else if (s[6] == 'A' && y < 12)
                {
                    string t2 = to_string(y) + s.erase(6, 2);
                    t2.erase(2, 1);
                    sh = stoi(t2);
                }
                else if (s[6] == 'P' && y == 12)
                {
                    string t3 = to_string(y) + s.erase(6, 2);
                    t3.erase(2, 1);
                    sh = stoi(t3);
                }
                else if (s[6] == 'A' && y == 12)
                {
                    string t4 = s.erase(6, 2);
                    t4.erase(0, 3);
                    sh = stoi(t4);
                }

                string e = s.erase(0, 8);
                string e1 = e.substr(0, 2);
                int k = stoi(e1);

                if (e[6] == 'P' && k < 12)
                {
                    k = k + 12;
                    string u1 = to_string(k) + e.erase(0, 2) + e.erase(6, 2);
                    u1.erase(2, 1);
                    eh = stoi(u1);
                }
                else if (e[6] == 'A' && k < 12)
                {
                    string u2 = to_string(k) + e.erase(6, 2);
                    u2.erase(2, 1);
                    eh = stoi(u2);
                }
                else if (e[6] == 'P' && k == 12)
                {
                    string u3 = to_string(k) + e.erase(6, 2);
                    u3.erase(2, 1);
                    eh = stoi(u3);
                }
                else if (e[6] == 'A' && k == 12)
                {
                    string u4 = e.erase(6, 2);
                    u4.erase(0, 3);
                    eh = stoi(u4);
                }
            }
            
            
        }
        for (int x = 0; x < n; x++)
        {
            if (mh >= sh && mh <= eh)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}