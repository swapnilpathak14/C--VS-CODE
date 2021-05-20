#include <bits/stdc++.h>
using namespace std;
long long int minv(long long int x, long long int y){
    if(x<y){
        return x;
    }
    return y;
}
long long int maxv(long long int x, long long int y){
    if(x>y){
        return x;
    }
    return y;
}
long long int collegelife(long long N, long long E, long long H, long long A, long long B, long long C){
    long long int temp;
    if(N<=0){
        return 0;
    }
    long long int cost=1e15;
    if(N<=E && N<=H){
        cost=minv(cost, N*C);
    }
    if(3*N<=H){
        cost = minv(cost, N * B);
    }
    if(2*N<=E){
        cost = minv(cost, N * A);
    }
    if(((H-N)/2>=1) && ((H-N)/2>=N-E)){
        if(B-C<0){
            temp=minv(N-1,(H-N)/2);
            cost=minv(cost, (B-C)*temp + N*C);
        }
        else{
            temp=maxv(1,N-E);
            cost=minv(cost,(B-C)*temp + N*C);
        }
    }
    if(E-N>=1 && E-N>=N-H){
        if(A-C<0){
            temp=minv(N-1,E-N);
            cost=minv(cost,(A-C)*temp+N*C);
        }
        else{
            temp=maxv(1,N-H);
            cost = minv(cost, (A - C) * temp + N * C);
        }
    }
    if(E/2>=1 && (E/2>=(3*N - H+2)/3)){
        if(A-B<0){
            temp=minv(N-1,E/2);
            cost = minv(cost, (A - B) * temp + N * B);
        }
        else{
            temp = maxv(1, (3 * N - H + 2) / 3);
            cost = minv(cost, (A - B) * temp + N * B);
        }
    }
    //Case: when every item is ordered
    if(E>=3 && H>=4 && N>=3){
        cost=minv(cost, A+B+C+collegelife(N-3,E-3,H-4,A,B,C));
    }
    return cost;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long N, E, H, A, B, C;
        cin >> N >> E >> H >> A >> B >> C;
        long long cost;
        cost=collegelife(N,E,H,A,B,C);
        if(cost==1e15){
            cout<<"-1\n";
        }
        else{
            cout<<cost<<endl;
        }
    }
    return 0;
}