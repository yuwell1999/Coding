//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                cnt++;
            }
            b[i] = cnt;
        }
    }

    cout << b[0];

    for (int k = 1; k < n; ++k) {
        cout << " " << b[k];
    }
    return 0;
}