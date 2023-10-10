#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int size1, size2;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= 65 && str1[i] <= 90) {
            str1[i] += 32;
        }
        if (str2[i] >= 65 && str2[i] <= 90) {
            str2[i] += 32;
        }
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                cout << 1 << endl;
                return 0;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << 0 << endl;
    return 0;
}