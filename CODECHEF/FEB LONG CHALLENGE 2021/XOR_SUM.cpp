#include<iostream>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int xorsums(vector<long long int>arr){
    long long int res=arr[0];
    
    for (long long int x=1;x<arr.size();x++)
    {
        res = res ^ arr[x]%998244353;
    }
    return res;
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;

    long long int arr[n];
    long long int sum=0;

    for(long long int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(long long int x=0;x<n;x++){
        sum+=arr[x]%998244353;
    }
    unsigned long long int size = pow(2, n);
    long long int res;
    
    long long int Q,M;  
    cin>>Q; //Queries
    while(Q--){

        cin>>M;
        vector<long long int>st;
        if(M!=1){
            res=0;
            for (long long int i = 0; i < size; i++)
            {
                for (long long int j = 0; j < n; j++)
                {
                    if (i & (1 << j))
                    {
                        st.push_back(arr[j]);
                    }   
                }
                
                if(st.size()>1 && st.size()<=M){
                    res += xorsums(st)%998244353;
                }
                st.clear();
                
            }
            res += sum;
            
        }
        else
        {
            res = sum;
        }

        cout << res % 998244353 << "\n";
    }  
    return 0;
}