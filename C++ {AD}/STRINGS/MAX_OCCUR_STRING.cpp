#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="abcacbade";
    int freq[26];
    for(int x=0;x<26;x++){
        freq[x]=0;
    }
    for(int x=0;x<s.length();x++){
        freq[s[x]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int x=0;x<26;x++){
        if(freq[x]>maxf){
            maxf=freq[x];
            ans=x+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;



}