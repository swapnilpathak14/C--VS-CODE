#include <iostream>
using namespace std;
int main(){
    char button;
    cout<<"Press a button: "<<endl;
    cin>>button;
    if(button =='A'){
        cout<<"Hello"<<endl;
    }
    else if(button=='B'){
        cout<<"Guten Tag"<<endl;
    }
    else if (button == 'C')
    {
        cout << "Hola" << endl;
    }
    else if (button == 'D')
    {
        cout << "Ciao" << endl;
    }
    else if (button == 'E')
    {
        cout << "Namaste" << endl;
    }
    else{
        cout<<"I am still learning"<<endl;
    }
    return 0;
}