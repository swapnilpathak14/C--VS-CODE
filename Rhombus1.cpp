#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    { //outer for loop
        for (int j = 1; j <= n - i; j++)
        {                //inner for loop
            cout << " "; //print space
        }
        for (int j = 1; j <= n; j++)
        {                //inner for loop
            cout << "* "; //print character after space
        }
        cout <<endl; //move to next line
    }

    return 0;
}