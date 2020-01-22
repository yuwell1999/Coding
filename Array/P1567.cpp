//
// Created by YuYue on 2020/1/21.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    int cnt = 0;
    int max = -1;
    for (int j = 1; j <= n; ++j) {
        cin >> a[j];
        if (a[j] > a[j - 1]) {
            cnt++;
        } else if (cnt > max) {
            max = cnt;
            cnt = 0;
        } else {
            cnt = 0;
        }
    }

    cout << max + 1;
    return 0;
}