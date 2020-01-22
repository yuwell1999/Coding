//
// Created by YuYue on 2020/1/20.
//

#include <iostream>

using namespace std;

//int f(int a[],int begin, int end){
//    for (int i = begin; i < end; ++i) {
//        a[i]=0;
//    }
//}

int main() {
    int L, M;
    cin >> L >> M;
    int l[L];

    for (int i = 0; i <= L; i++) {
        l[i] = 1; //1表示种了树
    }

    int a[M][2];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
        //把每一行读入的两个值作为左右值拔树
        for (int k = a[i][0]; k <= a[i][1]; k++) {
            l[k] = 0;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= L; i++) {
        if (l[i] == 1)cnt++;
    }
    cout << cnt;
}

