#include <iostream>
using namespace std;


int main(){
    char button;
    cout<<"Press a button: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'A'/* constant-expression */:
        cout<<"Hello"<<endl;/* code */
        break;
    case 'B':
        cout << "Guten Tag" << endl; /* code */
        break;
    case 'C':
        cout << "Hola" << endl; /* code */
        break;
    case 'D':
        cout << "Ciao" << endl; /* code */
        break;
    case 'E':
        cout << "Namaste" << endl; /* code */
        break;

    default:
    cout<<"I am still learning more!"<<endl;
        break;
    }
    return 0;

}