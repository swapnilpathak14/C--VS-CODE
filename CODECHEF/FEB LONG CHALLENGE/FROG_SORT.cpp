#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int wt[n];
        int lp[n];
        
        for(int x=0;x<n;x++){
            cin>>wt[x];
        }
        for(int y=0;y<n;y++){
            cin>>lp[y];
        }
        int hit=0;
        int p1, q1, r1, s1;
        int p2, q2, r2, s2;
        if(n==2){
            if(wt[0]==1 && wt[1]==2){
                cout<<"0"<<endl;
            }
            else{
                if(lp[0]==1){
                    cout<<"2"<<endl;
                }
                else{
                    cout<<"1"<<endl;
                }
            }         
        }
        else if(n == 3)
        {
            for(int x=0;x<n;x++){
                if (wt[x] == 1)
                {
                    p1 = x;
                    p2 = x;
                }
                else if (wt[x] == 2)
                {
                    q1 = x;
                    q2 = x;
                }
                else if (wt[x] == 3)
                {
                    r1 = x;
                    r2 = x;
                }
            }
            while (r1 <= q1 || q1 <= p1 || r1 <= p1)
            {
                while (q1 <= p1)
                {
                    q1 += lp[q2];
                    hit++;
                }
                while (r1 <= q1 || r1 <= p1)
                {
                    r1 += lp[r2];
                    hit++;
                }
            }
            cout << hit << endl;
        }
        else if(n==4){
            for (int x = 0; x < n; x++)
            {
                if (wt[x] == 1)
                {
                    p1 = x;
                    p2 = x;
                }
                else if (wt[x] == 2)
                {
                    q1 = x;
                    q2 = x;
                }
                else if (wt[x] == 3)
                {
                    r1 = x;
                    r2 = x;
                }
                else if(wt[x]==4){
                    s1=x;
                    s2=x;
                }
            }
            while (s1 <= q1 || s1 <= p1 || s1 <= r1 || r1 <= q1 || q1 <= p1 || r1 <= p1)
            {
                while (q1 <= p1)
                {
                    q1 += lp[q2];
                    hit++;
                }
                while (r1 <= q1 || r1 <= p1)
                {
                    r1 += lp[r2];
                    hit++;
                }
                while (s1 <= q1 || s1 <= p1 || s1 <= r1)
                {
                    s1 += lp[s2];
                    hit++;
                }
            }
            cout<<hit<<endl;
        }
    }
    return 0;
}