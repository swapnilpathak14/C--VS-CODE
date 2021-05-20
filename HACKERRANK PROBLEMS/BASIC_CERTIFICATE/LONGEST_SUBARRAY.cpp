#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int longestSubarray(vector<int> arr)
{

    long long int maxs = 0;
    long long int x, y = x + 1;
    long long int temp = 0;
    sort(arr.begin(), arr.end());
    for (x = 0; x < arr.size(); x++)
    {
        temp = arr[x];
        while (y < arr.size() && abs(arr[y] - arr[x]) < 2)
        {
            if (std::find(arr.begin(), arr.end(), arr[y]) != arr.end())
            {
                if (arr.size() == 2)
                {
                    break;
                }
                else
                {
                    temp = arr[y];
                }
            }
            y++;
        }
        maxs = max(maxs, y - x);
        y = x + 1;
        arr.clear();
    }
    return maxs;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = longestSubarray(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
