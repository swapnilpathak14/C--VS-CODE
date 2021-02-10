#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int x=n;x>0;x--){
        long long int A, B;
        cin >> A >> B;
        if(A==1 && B==1){
            cout<<1<<endl;
            continue;
        }
        long long Ev1=(int)A/2;

        long long Ev2=(int)B / 2;
        long long O1= (int)(A + 1) / 2;
        long long O2= (int)(B + 1) / 2;
        long long ans = Ev1*Ev2+O1*O2;
        cout << ans << endl;
        }
    
        
    
    
}