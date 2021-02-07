#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n=26;
    int h[n];

    for(int y=0;y<26;y++){
        cin>>h[y];
    }
    string word;
    for(int x=0;x<word.size();x++){
        cin>>word;
    }
    int height=0;
    for (char i : word){
        if (h[(int)i - 97] > height)
            height = h[(int)i - 97];
    
    }
    cout << height * word.size() << endl;

    return 0;
    cout<<height<<endl;

}