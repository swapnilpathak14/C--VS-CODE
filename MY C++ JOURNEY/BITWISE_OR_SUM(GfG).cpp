#include <bits/stdc++.h>
using namespace std;

// Function to calculate Bitwise OR of
// sums of all subsequences
int findOR(long long int N, long long int nums[])
{
    // Stores the prefix sum of nums[]
    int prefix_sum = 0;

    // Stores the bitwise OR of
    // sum of each subsequence
    int result = 0;

    // Iterate through array nums[]
    for (int i = 0; i < N; i++)
    {

        // Bits set in nums[i] are
        // also set in result
        result |= nums[i];

        // Calculate prefix_sum
        prefix_sum += nums[i];

        // Bits set in prefix_sum
        // are also set in result
        result |= prefix_sum;
    }

    // Return the result
    return result;
}

// Driver Code
int main()
{
    long long int n;
    cin>>n;
    // Given array arr[]
    long long int arr[n];
    for(long long int x=0;x<n;x++){
        cin>>arr[x];
    }
    

    // Function Call
    cout << findOR(n,arr);

    return 0;
}
