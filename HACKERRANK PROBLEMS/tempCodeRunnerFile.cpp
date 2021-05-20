#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin >> n;
        int arr[n];
        int ary[n];
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        for (int y = 0; y < n; y++)
        {
            cin >> ary[y];
        }
        int x = 0;
        int y = 0;

        for (x = 0; x < n; x++)
        {
            for (y = x; y < n; y++)
            {
                if (arr[x] == ary[y])
                {
                    int temp = arr[y];
                    ary[y] = arr[x];
                    arr[x] = temp;
                    break;
                }
            }
        }
        if (y == n)
        {
            cout << "Impossible\n";
        }
        else
        {
            cout << "Possible\n";
        }
    }
    return 0;
}