#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void teamname(){
    int n;
    cin>>n;
    string tm[n];
    for(int x=0;x<n;x++){
        cin>>tm[x];
    }
    long long count=0;
    sort(tm,tm+n);
    string temp1, temp2;
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            temp1=tm[x];
            temp2=tm[y];
            swap(temp1[0], temp2[0]);
            if(temp1[0]==temp2[0]){

            }
            
            else if (temp1 == temp2) {}
            else if (!binary_search(tm, tm + n, temp1) && !binary_search(tm, tm + n, temp2)){
                count += 2;
            } 
        }
    }
    cout<<count<<endl;


}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        teamname();
    }
    return 0;
}