#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long N, E, H, A, B, C;
        cin >> N >> E >> H >> A >> B >> C;
        vector<long long int> cost;
        vector<long long int> k;
        for(int x=0;x<N;x++){
            k.push_back(x);
        }
        for(int y=0;y<=N;y++){
            long long id1=lower_bound(k.begin(),k.end(),(2*N-E-2*y))- k.begin();
            long long id2 = upper_bound(k.begin(), k.end(), (H-3*y)) - k.begin()-1;
            if(id2<id1 || id1==N){
                continue;
            }
            if(id2==N && id2+3*y>H){
                continue;
            }
            long long int ct;
            if(C>A){
                if(id1<(N-y)){
                    ct=id1;
                }
                else{
                    ct=N-y;
                }
            }
            long long int m=N-ct-y;
            if(ct+2*y>=2*N-E && ct+3*y<=H){
                cost.push_back(A*m+B*y+C*ct);
            }
        }
        if(cost.size()==0){
            cout<<"-1\n";
        }
        else{
            long long int minimum=cost[0];
            for(long long int x=0;x<cost.size();x++){
                if(cost[x]<minimum){
                    minimum=cost[x];
                }
            }
            cout<<minimum<<"\n";
        }
    }
    return 0;
}