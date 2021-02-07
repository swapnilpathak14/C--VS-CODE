#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "asciiklsdfgh";
    cout<<'a'-'A'<<endl; //'a' is 32 places ahead of capital A 
    for(int x=0;x<=s.size();x++){
        if(s[x]>='a' && s[x]<='z'){
            s[x]-=32;
        }
    }
    cout<<s<<endl;


}
