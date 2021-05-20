#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int makestringempty(string str){
    long long int count=0;
    for(int x=0;x<str.size();x++){
        if(str[x]=='g'&& str[x+1]=='e'&& str[x+2]=='e'&& str[x+3]=='k'){
            str.clear();
            count++;
        }
        
    }
    if (str=="")
    {
        return count+1;
    }
    else{
        return -1;
    }
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    cout<<makestringempty(s)<<endl;
    return 0;
}