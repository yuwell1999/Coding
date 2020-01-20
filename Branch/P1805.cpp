//
// Created by YuYue on 2020/1/20.
//

//不高兴的津津

#include <iostream>

using namespace std;

int main() {
    int a[7][2] = {};
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }

//    for (int i = 0; i < 7; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            cout<<a[i][j];
//            if(j==0){
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
    bool flag = 0;//0表示高兴
    int maxDay = 0;
    int maxHour = 0;
    maxHour = a[0][0] + a[0][1];
    maxDay = 0;

    //检查是否不会不高兴
    for (int i = 0; i < 7; ++i) {
        if (a[i][0] + a[i][1] > 8) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << flag;
    } else {
        for (int i = 0; i < 7; ++i) {
            if (a[i][0] + a[i][1] > 8) {
                if (a[i][0] + a[i][1]>maxHour) {
                    maxDay = i;
                    maxHour = a[i][0] + a[i][1];
                }
            }
        }
        cout<<maxDay+1;
        return 0;
    }
}
