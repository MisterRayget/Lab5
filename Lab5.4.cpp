#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    long long num1 = 1;
    long long num2 = 1;
    for (int a=1; a <= 20; a++)
        num2 *= (num1 * a);
    cout << num2;
    return 0;
}