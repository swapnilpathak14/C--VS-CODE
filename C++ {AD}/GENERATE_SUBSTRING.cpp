#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void substrin(string s, string ans= ""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    substrin(ros,ans);
    substrin(ros,ans+ch);

}
int main(){
    substrin("ABC","");
    cout<<endl;
    return 0;
}