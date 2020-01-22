//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

int main() {
    int x, n;
    const int step = 250;
    int dis = 0;
    cin >> x >> n;

    int w = n / 7;
    int d = n % 7;

    dis = w * 5 * step;

    //周x，过d天
    int rest = 0;

    if (x + d <= 6) {
        rest = 0;
    }
    if (x + d == 7 || (x == 7)) {
        rest = 1;
    }
    if (x + d >= 8 && x != 7) {
        rest = 2;
    }
    if (x == 7 && d == 0) {
        rest = 0;
    }
    dis += (d - rest) * step;
//    for (int i = x; i <= x + n - 1; i++) {
//        if (i % 7 == 6 || i % 7 == 0) {
//            continue;
//        }
//        dis += 250;
//    }
    cout << dis;
}