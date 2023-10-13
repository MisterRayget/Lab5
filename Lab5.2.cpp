#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1=2;
    int num2 = 3;
    int num3 = 4;
    int num4 = 5;
    int num5 = 6;
    int num6 = 7;
    int num7 = 8;
    int num8 = 9;
    cout << "Уменожение на 2"<<endl;
    for (int a = 1; a < 10; a++) {
        cout << num1 << "*" << a << "=" << num1 * a<<endl;
    }
    cout << "Уменожение на 3"<<endl;
    for (int b = 1; b < 10; b++) {
        cout << num2 << "*" << b << "=" << num2 * b << endl;
    }
    cout << "Уменожение на 4"<<endl;
    for (int c = 1; c < 10; c++) {
        cout << num3 << "*" << c << "=" << num3 * c << endl;
    }
    cout << "Уменожение на 5"<<endl;
    for (int d = 1; d < 10; d++) {
        cout << num4 << "*" << d << "=" << num4 * d << endl;
    }
    cout << "Уменожение на 6"<<endl;
    for (int q = 1; q < 10; q++) {
        cout << num5 << "*" << q << "=" << num5 * q << endl;
    }
    cout << "Уменожение на 7"<<endl;
    for (int s = 1; s < 10; s++) {
        cout << num6 << "*" << s << "=" << num6 * s << endl;
    }
    cout << "Уменожение на 8"<<endl;
    for (int z = 1; z < 10; z++) {
        cout << num7 << "*" << z << "=" << num7 * z << endl;
    }
    cout << "Уменожение на 9"<<endl;
    for (int x = 1; x < 10; x++) {
        cout << num8 << "*" << x << "=" << num8 * x << endl;
    }

    return 0;
}