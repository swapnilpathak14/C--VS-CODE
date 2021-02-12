#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
long long int teamname(vector<char>tm, vector<char>tm2){
    set<char> t(tm.begin(),tm.end());
    
    long long temp=0;
    for(auto x:tm2){
        if(t.find(x)!=t.end()){
            temp++;
        }
    }
    return temp;

}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int count = 0;
        map<string,vector<char>>s1;

        string t; //names
        for(long long int x=0;x<n;x++){
            cin>>t;
            if(t.size()>0){
                s1[t.substr(1)].push_back(t[0]);
            }
        }
        for(auto x:s1){
            for(auto y:s1){
                if(x.first!=y.first){
                    long long int temp=teamname(x.second,y.second);
                    count+=(x.second.size()-temp)*(y.second.size()-temp);
                }
            }
        }
        cout<<count<<endl;

    }
}