#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vs;
    vs.push_back(1);
    vs.push_back(2);
    vs.push_back(3);

    for(int x=0;x<vs.size();x++){
        cout<<vs[x]<<endl;
    }
}