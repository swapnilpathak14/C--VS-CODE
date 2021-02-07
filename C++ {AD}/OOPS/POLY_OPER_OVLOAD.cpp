#include<iostream>
using namespace std;
class complexnum{
    private:
    int real,img;
    public:
    //put all the member functions
    complexnum(int r=0, int i=0){
        real=r;
        img=i;
        // CONSTRUCTOR
    }
    //WRITE CODE FOR OPERATOR OVERLOAD
    complexnum operator + (complexnum const &obj){
        //by reference
        complexnum res;
        res.img = img + obj.img;
        res.real = real + obj.real; //current real part + object's real part
        return res;
    }

        //MAKE MEMBER FUNCTION FOR PRINTING
        void printinfo()
        {
            cout << real << " +i" << img << endl;
    }
};
int main(){
    complexnum c1(12, 7), c2(8, 10);
    complexnum c3 = c1 + c2;
    c3.printinfo();
    return 0;
}