#include<iostream>
#include<string>
using namespace std;
string stringdupli(string s){
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    stringdupli(s.substr(1));
    string ans = stringdupli(s.substr(1)); //store

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    cout<<stringdupli("aaaabbbeeecdddd");
    return 0;
}