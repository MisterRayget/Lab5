﻿#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num1;
    cout << "Введите высоту:";
    cin >> num1;
    for (int num2 = 2; num2 < num1; num2++) {
        for (int num3 = 1; num3 < num1 - num2; num3++) {
            cout << ' ';
        }
        for (int num3 = num1 - num2 * 2; num3 <= num1; num3++) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int num4 = 0; num4 < num1; num4++) {
        for (int num5 = 0; num5 < num1; num5++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}