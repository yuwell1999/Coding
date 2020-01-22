//
// Created by YuYue on 2020/1/21.
//

#include <iostream>

using namespace std;

int main() {
    //string str="";
    char a[14];
    for (int i = 1; i <= 13; ++i) {
        cin >> a[i];
    }
    int last = (a[1] - 48) * 1 +
               (a[3] - 48) * 2 + (a[4] - 48) * 3 + (a[5] - 48) * 4 +
               (a[7] - 48) * 5 + (a[8] - 48) * 6 + (a[9] - 48) * 7 + (a[10] - 48) * 8 + (a[11] - 48) * 9;
    //int id = a[13] - 48;
    last = last % 11;
    if (last == 10) {
        last = 'X';
        if (a[13] == last) {
            cout << "Right";
        } else {
            for (int i = 1; i <= 12; i++) {
                cout << a[i];
            }
            cout << "X";
        }
    } else {
        if ((a[13] - 48) == last) {
            cout << "Right";
        } else {
            for (int i = 1; i <= 12; ++i) {
                cout << a[i];
            }
            cout << last;
        }

    }
    //cout<<str;
    return 0;
}