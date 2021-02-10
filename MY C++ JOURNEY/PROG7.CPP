#include <iostream>
using namespace std;
int main(){
    enum SEMESTER{Summer, Monsoon, Winter};
    //define SEMESTER
    SEMESTER s1,s2,s3;
    s1=Summer;
    s2=Monsoon;
    s3=Winter;
    cout<<"SEMESTER =";
    if (s1==s2)
    cout<<"Same Semester";
    return 0;

}