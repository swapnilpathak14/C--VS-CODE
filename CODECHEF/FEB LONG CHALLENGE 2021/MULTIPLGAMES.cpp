#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int N,Q,M;

    while(t--){
        cin>>N>>Q>>M;
        vector<long long int>arr;
        for(auto x:arr){
            cin>>arr[x];
        }
        long long const int m=1e6;
        int res=0;
        int s[m]={};
        map<pair<int,int>,int> s1;
        for(int y=0;y<Q;y++){
            long long int L,R;
            cin>>L>>R;
            L--;
            R--;
            if(arr[L]>M){
                continue;
            }
            else if(arr[L]<=M && arr[R]>M){
                s[arr[L]]++;
                s[M+1]--;
            }

            else if(arr[R]<=M){
                s[arr[L]]++;
                s[M + 1]--;
                s1[{arr[L],arr[R]}]++;
            }
        }

        for (auto x : s1)
        {
            long long int p=x.first.first;
            long long int q=x.first.second;
            long long int r=x.second;

            s[p+q]=s[p+q]-1;
            s[q+2*p]=s[q+2*p]+1;
            long long int a=q+2*p;
            while(a+q<=M){
                a=a+q;
                s[a]=s[a]-1;
                s[a+p]+=1;
                a=a+p;
            }
        }
        for(int x=1;x<=m;x++){
            s[x]=s[x]+s[x-1];
            res=max(res,s[x]);
        }
        cout<<res<<endl;
    }
    
}