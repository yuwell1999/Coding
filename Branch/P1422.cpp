//
// Created by YuYue on 2020/1/20.
//

//小玉家的电费
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double p1 = 0.4463, p2 = 0.4663, p3 = 0.5663;
    int e = 0;
    cin >> e;
    int ep1 = 150, ep2 = 400 - 150, ep3;
    float sum;
    if (e <= 150) {
        sum = e * p1;
    } else if (150 < e && e <= 400) {
        sum = 150 * p1 + (e - 150) * p2;
    } else if (e > 400) {
        sum = 150 * p1 + 250 * p2 + (e - 400) * p3;
    }
    //cout.setf(ios::fixed);

    cout << fixed << setprecision(1) << sum;
    //printf("%.1lf",sum);
}