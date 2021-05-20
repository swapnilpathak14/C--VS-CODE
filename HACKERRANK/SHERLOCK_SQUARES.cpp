#include<iostream>
#include<cmath>
using namespace std;
int sherlock(int n, int m){
    int count=0;
    for(int y=1;y<=m;y++){
        for (int x = n; x <= m; x++){
            if (sqrt(x) == y)
            {
                count++;
            }
        }
    } 
    return count;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        cout << sherlock(n, m) << "\n";

        
    }
    
}