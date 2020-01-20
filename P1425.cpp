//
// Created by YuYue on 2020/1/20.
//

//小鱼游泳时间

# include<iostream>
# include <stdio.h>

using namespace std;

int main() {
    int h1, m1, h2, m2, sum_min, hour, minute;
    cin >> h1 >> m1 >> h2 >> m2;
//    sum_min = (60 * h2 + m2) - (60 * h1 + m1);
//    //cout<< sum_min << endl;
//    hour = sum_min / 60;
//    minute = sum_min - hour * 60;
//    //printf("%d %d",hour,minute);
//    cout<<hour<<" "<<minute;
    if (m2 >= m1) {
        cout << h2 - h1 << " " << m2 - m1;
    } else {
        cout << (h2 - h1 - 1) << " " << (60 + m2 - m1);
    }
    return 0;
}