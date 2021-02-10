// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the nth XOR Fibonacci number
int Xorfib(int a,int b, int n)
{
    if(n==0){
        cout<<a;
        
    }
    if(n==1){
        cout<<b;
    }
    
    int y;
    for(int x=2;x<n-2;x++){
        y=(n-1) xor (n-2);
    }   
    return y;


}
int main()
{
    int t;
    cin>>t;
    int a;
    int b;
    int n;
    for(int i=0;i<t;i++){
        cin >> a >> b >> n;
        
        
            

        cout << Xorfib(a, b, n) << endl;
        
    }
    
    
}