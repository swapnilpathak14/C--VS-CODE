#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            cout<<"Go out today with Jam!"<<endl;
        }
        else{
            cout << "Stay at home and cuddle."<<endl;
        }
        
    }
    return 0;
}