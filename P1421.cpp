//
// Created by YuYue on 2020/1/20.
//

// 小玉买铅笔

#include <iostream>

using namespace std;

int main() {
    int a, b = 0;
    cin >> a >> b; //a元，b角
    int pen = 19;
    cout << (10 * a + b) / pen;
    return 0;
}