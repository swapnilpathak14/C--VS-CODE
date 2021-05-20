#include <bits/stdc++.h>
using namespace std;
void collegelife(int N, int E, int H, int A, int B, int C){
    int pr[3];
    pr[0]=A;
    pr[1]=B;
    pr[2]=C;
    sort(pr,pr+3);
    bool check1=1;
    bool check2=1;
    bool check3=1;
    int count=0;
    int cost=0;
    int temp;
    for(int x=0;x<3;x++){
        if(pr[x]==A && E>=2){
            if(check1){
                count+=(E/2);
                cost+=A*(E/2);
                E = E % 2;
                check1 = 0;
            }
        }
        if(pr[x]==B && H>=3){
            if(check2){
                count+=(H/3);
                cost+=B*(H/3);
                H=H%3;
                check2=0;
            }
        }
        if(pr[x]==C && E>=1 && H>=1){
            if(check3){
                if(min(E,H)>N){
                    temp=N;
                }
                else{
                    temp=min(E,H);
                }
                count+=temp;
                cost+=C*temp;
                E-=temp;
                H-=temp;
                check3=0;
            }
        }
        if(count>=N){
            break;
        }
    }
    if(count<N){
        cout<<"-1\n";
    }
    else{
        cout<<cost<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, E, H, A, B, C;
        cin >> N >> E >> H >> A >> B >> C;
        //Omlette req. - 2 eggs
        //Chocolate cake - 1 egg and 1 chocolate bar
        // Chocoloate milkshake - 3 chocolate bars
        collegelife(N, E, H, A, B, C);
    }
    return 0;
}