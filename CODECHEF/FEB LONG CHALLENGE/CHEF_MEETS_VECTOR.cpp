#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string junkWhiteSpace;
    getline(cin, junkWhiteSpace);
    for (int t = 1; t <= T; t++)
    {
        string P;
        getline(cin, P);
        int N;
        cin >> N;
        string junkWhiteSpace;
        getline(cin, junkWhiteSpace);
        vector<pair<string, string>> vect;
        for (int i = 0; i < N; i++)
        {
            string temp1;
            getline(cin, temp1);
            pair<string, string> temp;
            temp.first = temp1.substr(0, 8);
            temp.second = temp1.substr(9, string::npos);
            vect.push_back(temp);
        }
        int PM0, MM0, HH0;
        string temp = P.substr(6, string::npos);
        if (temp == "PM")
            PM0 = 1;
        else
            PM0 = 0;
        temp = P.substr(0, 2);
        stringstream hours(temp);
        hours >> HH0;
        temp = P.substr(3, 2);
        stringstream minutes(temp);
        minutes >> MM0;
        if (PM0 == 1 && HH0 != 12)
            HH0 = HH0 + 12;
        if (PM0 == 0 && HH0 == 12)
            HH0 = HH0 - 12;
        for (size_t i = 0; i < vect.size(); i++)
        {
            int PM1, PM2, MM1, MM2, HH1, HH2;
            string temp1, temp2;
            temp1 = vect[i].first.substr(6, string::npos);
            temp2 = vect[i].second.substr(6, string::npos);
            if (temp1 == "PM")
                PM1 = 1;
            else
                PM1 = 0;
            if (temp2 == "PM")
                PM2 = 1;
            else
                PM2 = 0;

            temp1 = vect[i].first.substr(0, 2);
            temp2 = vect[i].second.substr(0, 2);
            stringstream hour1(temp1);
            stringstream hour2(temp2);
            hour1 >> HH1;
            hour2 >> HH2;

            temp1 = vect[i].first.substr(3, 2);
            temp2 = vect[i].second.substr(3, 2);
            stringstream minute1(temp1);
            stringstream minute2(temp2);
            minute1 >> MM1;
            minute2 >> MM2;

            if (PM1 == 1 && HH1 != 12)
                HH1 = HH1 + 12;
            if (PM1 == 0 && HH1 == 12)
                HH1 = HH1 - 12;

            if (PM2 == 1 && HH2 != 12)
                HH2 = HH2 + 12;
            if (PM2 == 0 && HH2 == 12)
                HH2 = HH2 - 12;

            if (HH1 < HH0 && HH0 < HH2)
                cout << 1;
            else if (HH1 == HH0 && HH0 == HH2)
            {
                if (MM1 <= MM0 && MM0 <= MM2)
                    cout << 1;
                else
                    cout << 0;
            }
            else if (HH1 == HH0)
            {
                if (MM1 <= MM0)
                    cout << 1;
                else
                    cout << 0;
            }
            else if (HH0 == HH2)
            {
                if (MM0 <= MM2)
                    cout << 1;
                else
                    cout << 0;
            }
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}