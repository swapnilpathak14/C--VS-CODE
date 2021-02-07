#include <iostream> //prime numbers between the range of given numbers
using namespace std;
int main(){
    int a, b;
    cin >> a>>b;

    for (int num = a; num <= b; num++){ //loop for range of numbers
        int x;
        for (x = 2; x < num; x++){  //loop for prime numbers
            if (num % x == 0){
                break;
            }
        }
        if (x == num){
            cout << num << endl;
        }
    }
    return 0;
}