#include <iostream>
using namespace std;

int main() {
    int n, input, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> input;
            if (input) {
                count++;
            }
        }
        if (count >= 2) {
            ans++;  
        }
    }

    cout << ans << endl;
    return 0;
}