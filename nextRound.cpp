#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0, input = 0, count = 0;
    
    cin >> n;
    cin >> k;
    int scores[n];

    for (int i = 0; i < n; i++) {
        cin >> input;
        scores[i] = input;
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;
    return 0;
}