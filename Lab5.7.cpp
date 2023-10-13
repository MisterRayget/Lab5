#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;
    cout << "Введите число:";
    cin >> num1;
    for (int a = num1; a > 0; a--) {
        if (num1 % a == 0) {
            cout << a;
        }
    }

    return 0;
}