#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return; //base condition
    }
    string res=s.substr(1);
    reverse(res);
    cout<<s[0];
}
int main(){
    reverse("tiK&puP");
    return 0;
}