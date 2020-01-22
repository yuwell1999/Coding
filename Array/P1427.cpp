//
// Created by YuYue on 2020/1/20.
//

# include <iostream>

using namespace std;

int main() {
    int a[100], i = 0;
    do {
        i++;
        cin >> a[i];

    } while (a[i] != 0);

    for (int j = i - 1; j > 0; j--) {
        cout << a[j] << " ";
    }
}