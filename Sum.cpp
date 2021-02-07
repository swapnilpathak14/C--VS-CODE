#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum=0;
    for(int counter=1; counter<=x;counter++){
        sum+=counter;
    }
    cout<<sum<<endl;
    return 0;


}