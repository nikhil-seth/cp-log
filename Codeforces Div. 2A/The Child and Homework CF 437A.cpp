#include<bits/stdc++.h>
using namespace std;
string o[4];

int main() {

    int maxlength = 0, minlength = 110, maxindex = 0, minindex = 0;

    int c[4];

    for (int i = 0; i < 4; i++) {
        getline(cin, o[i]);
        c[i] = o[i].length() - 2;
    }

    sort(c, c + 4);

    bool hasMax = c[3] >= c[2] * 2;
    bool hasMin = c[0] <= c[1] / 2;

    if (hasMax == hasMin) {
        cout << "C";
    } else if (hasMin) {
        for (int i = 0; i < 4; i++) {
            if (c[0] + 2 == o[i].length()) {
                cout << o[i].at(0);
            }
        }
    } else if (hasMax) {
        for (int i = 0; i < 4; i++) {
            if (c[3] + 2 == o[i].length()) {
                cout << o[i].at(0);
            }
        }
    }

    return 0;
}