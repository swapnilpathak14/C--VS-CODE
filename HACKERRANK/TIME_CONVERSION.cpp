#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    for(int x=0;x<=s.length();x++){

        string s1=s.substr(0,2);
        int y=stoi(s1);
        
        if(s[x]=='P' && y<12){
            y=12+y;
            s.erase(8,2);
            cout<<to_string(y)+s.erase(0,2)<<endl;
        }
        else if(s[x]=='P' && y==12){
            y = y;
            s.erase(8, 2);
            cout << to_string(y) + s.erase(0, 2) << endl;
        }
        else if(s[x]=='A' && y<12){
            s.erase(8,2);
            cout<<s<<endl;
        }
        else if(s[x]=='A' && y==12){
            y=0;
            
            string z="0";
            z.append(s);
            z.erase(9, 2);
            cout<<to_string(y)+z.erase(1,2)<<endl;
        }
    }
    return 0; 
}