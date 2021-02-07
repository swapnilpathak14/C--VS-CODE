#include<iostream>
using namespace std;
long long merge(int arr[], int l, int mid, int r)
{
    long long inv=0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int x = 0; x < n1; x++)
    {
        a[x] = arr[l + x]; //store in the original array
    }
    for (int y = 0; y < n2; y++)
    {
        b[y] = arr[mid + 1 + y];
    }
    //create pointers
    int x = 0;
    int y = 0;
    int k = l;
    while (x < n1 && y < n2)
    {
        if (a[x] < b[y])
        {
            arr[k] = a[x]; //will get stored in orig array
            k++;
            x++;
        }
        else
        {
            arr[k] = b[y];
            inv+=n1-x; //it is very important step
            k++;
            y++;
        }
    }
    //case when one pointer reaches end and the other pointer is still there
    while (x < n1)
    {
        arr[k] = a[x];
        k++;
        x++;
    }
    while (y < n2)
    {
        arr[k] = b[y];
        k++;
        y++;
    }
    return inv;
}
long long mergesort(int arr[], int l, int r)
{
    long long inv=0;
    if (l < r)
    {

        int mid = (l + r) / 2;
        inv+=mergesort(arr, l, mid); //recursive function call
        inv+=mergesort(arr, mid + 1, r);
        inv+=merge(arr, l, mid, r); //we have to merge again
    }
    return inv;
}
int main()
{
    int t;
    cin >> t;
    for(int x=1;x<=t;x--){
        int n;
        cin>>n;
        int arr[n];
        long long inv=0;
        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        
        cout << mergesort(arr, 0, n - 1)<<endl;
        
        
    }
    return 0;
}