//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

int main() {
    int count = 0;
    double temp = 0;
    double l;
    double step_length = 2;
    cin >> l;
    while (temp < l) {
        temp += step_length;
        step_length *= 0.98;
        count++;
    }
    cout << count;
}