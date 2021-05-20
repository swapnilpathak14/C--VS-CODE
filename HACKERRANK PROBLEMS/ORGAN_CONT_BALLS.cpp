#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    string str="Possible";
    while(t--){
        long long int n;
        cin >> n;
        int arr[n];
        int ary[n];
        for (int x = 0; x < n; x++)
        {
            
            for (int y = 0; y < n; y++)
            {
                cin >> arr[x];
                cin >> ary[y];
            }
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
            if (y == n)
            {
                str="Impossible";
                break;
            }
        }
        cout<<str<<"\n";
    }
    return 0;
}