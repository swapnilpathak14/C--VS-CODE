#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int floor=2;
    int cumm=2;
    for(int x=2;x<=n;x++){
        floor*=3;
        floor = floor/2;
        cumm = cumm + floor;
    }
    cout<<cumm<<endl;
}