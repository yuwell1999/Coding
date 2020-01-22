//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

int count(int s, int k) {
    int cnt = 0;
    while (s != 0) {
        if (s % 10 == k) cnt++;
        s = s / 10;
    }
    return cnt;
}

int main() {
    int x, n;
    int cnt = 0;
    cin >> n >> x;
    for (int i = 1; i < n + 1; ++i) {
        cnt += count(i, x);
    }
    cout << cnt;
}