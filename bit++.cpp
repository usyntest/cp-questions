#include <iostream>
using namespace std;

int main() {
    int lines, x = 0;
    cin >> lines;
    for (int i = 0; i < lines; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < 3; j++) {
            if (line[j] == '+') {
                x++;
                break;
            }
            else if (line[j] == '-') {
                x--;
                break;
            }
        }

    }
    cout << x << endl;
    return 0;
}