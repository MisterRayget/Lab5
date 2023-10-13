#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1=1;
    int num2=30;
    for (int num3=num1; num3 <= num2; num3++) {
        if (num3 % 2 != 0) {
            cout << num3 << "-";
        }
        if (num3 % 2 == 0) {
            cout << num3 <<endl;
        }
    }

    return 0;
}