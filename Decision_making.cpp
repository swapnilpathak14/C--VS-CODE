#include <iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE //add beauty to output and input
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int savings;
    cin>>savings;
    if (savings>5000){
        cout<<"Jam \n";
    }  
    else{
        cout<<"Kitten Date \n";
    }
return 0;
}