#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dist=1;
        vector<pair<int,int>>h,k;
        for(int x=0;x<n;x++){
            int p;
            cin>>p;
            h.push_back({x+1,p});
        }
        if(n==2){
            cout<<"1\n";
            continue;
        }
        k.push_back(h[0]);
        k.push_back(h[1]);
        int s=k.size();
        for(int x=2;x<n;x++){
            while(k.size()>=2){
                double star1=((double)k[s-1].second-(double)k[s-2].second)/((double)k[s-1].first-(double)k[s-2].first);
                double star2 = ((double)h[x].second - (double)k[s - 1].second) / ((double)h[x].first - (double)k[s - 1].first);
                if(star1<=star2){
                    k.pop_back();
                    s--;
                }
                else{
                    break;
                }
                
            }
            k.push_back(h[x]);
            s++;
            dist = max(dist, k[s - 1].first - k[s - 2].first);
        }
        cout<<dist<<"\n";
    }
}