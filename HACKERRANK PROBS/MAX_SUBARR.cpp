#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        long m;
        cin >> n>>m;
        int arr[n];
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        int maxs=0;
        for (int x = 0; x < n; x++)
        {

            int sum = 0; //initialize sum from zero
            for (int y = x; y < n; y++)
            {

                sum += arr[y];
                sum=sum%m;
                maxs=max(sum,maxs);
            }
            
            
        }
        cout << maxs;
    }
    return 0;
}