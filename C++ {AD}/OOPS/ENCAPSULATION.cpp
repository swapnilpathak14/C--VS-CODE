#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void funca(){
        cout<<"func a"<<endl;
    }
    private:
        int b;
        void funcb()
        {
            cout << "func b" << endl;
        }
    protected:
        int c;
        void funcc()
        {
            cout << "func c" << endl;
        }
};
int main(){
    A obj;
    obj.funca();
    

}