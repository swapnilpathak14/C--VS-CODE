#include<iostream>
using namespace std;
void pipi(string s){
    if(s.length()==0){
        return;
    }
    
    if (s[0] = 'p' && s[1] == 'i'){
        cout<<"3.14";
        pipi(s.substr(2));
    }
    else{
        cout<<s[0];
        pipi(s.substr(1));       
    }

    
}
int main(){
    pipi("pippxxppiixippi");
    return 0;
}