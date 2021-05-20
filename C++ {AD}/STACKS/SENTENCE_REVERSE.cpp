#include<iostream>
#include<stack>
using namespace std;
void revsent(string s){
    stack<string> st;
    for(int x=0;x<s.length();x++){
        string word="";
        while(s[x]!=' ' && x<s.length()){
            word+=s[x];
            x++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}
int main(){
    string s="Hey! How are you doing today?";
    revsent(s);
}