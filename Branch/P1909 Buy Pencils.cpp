#include <iostream>

using namespace std;

int s, pen1, pen2, pen3, n1, n2, n3, p1, p2, p3;
int sp1, sp2, sp3;
//int max;

int main() {
    int max;
    cin >> s >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;

    while (pen1 < s) {
        pen1 += n1;
        sp1 += p1;
    }

    while (pen2 < s) {
        pen2 += n2;
        sp2 += p2;
    }

    while (pen3 < s) {
        pen3 += n3;
        sp3 += p3;
    }
    //cout << sp1 << endl << sp2 << sp3;
    if (sp1 > sp2) {
        max = sp2;
    } else {
        max = sp1;
    }
    if (sp3 < max) {
        max = sp3;
    }
    cout << max;
}