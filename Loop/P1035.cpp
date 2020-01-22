//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

double f(int n) {
    return 1.0 / double(n);
}

int main() {
    int k, n = 0;
    int temp;
    cin >> k;

    for (double sum = 0; sum <= k; n++, sum += 1.0 / n);
    cout << n;
}