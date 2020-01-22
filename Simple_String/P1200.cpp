//
// Created by YuYue on 2020/1/21.
//

#include <iostream>

using namespace std;

int convert(char a) {
    return a - 'A'+1;
}

int main() {
    string s1 = "", s2 = "";
    cin >> s1 >> s2;
    int planet = 1;
    for (int i = 0; i < s1.length(); i++) {
        planet *= convert(s1[i]);
    }
    int team = 1;
    for (int i = 0; i < s2.length(); i++) {
        team *= convert(s2[i]);
    }

    if (planet % 47 == team % 47) {
        cout << "GO";
    } else {
        cout << "STAY";
    }
    //cout<<s1<<endl<<s2;
}