#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string A;
    cin>>A;
    string B;
    cin>>B;
    int cntx=0;
    int cnty=0;
    for(int i=0;i<A.size();i++){

        if(A[i]=='x'){
            cntx++;
        }
        if(cntx%2!=0){
            A=A+'x';
        }
        else if(cntx%2==0){
            A=A+'y';
        }
        A.erase(A.begin() + 0);
        
    }
    
    if (A == B)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}