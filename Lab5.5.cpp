#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1 = 1;
    int num2 = 0;
    for (num1; num1 <= 100; num1++) {
        if (num1 % 2 == 0 && num1 % 3 == 0) {
            num2 += num1;
        }

    }
    cout << num2;
    return 0;
}