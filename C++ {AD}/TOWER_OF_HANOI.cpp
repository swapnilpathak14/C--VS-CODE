#include<iostream>
using namespace std;
void towerhanoi(int n, char src, char dest, char help){

    if(n==0){
        return; //base condition
    }
    towerhanoi(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerhanoi(n-1,help,dest,src);

}
int main(){
    towerhanoi(3,'A','B','C');

}