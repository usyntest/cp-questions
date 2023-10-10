#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+') {
            continue;
        }
        int j;
        for (j = 0; j < output.length(); j++) {
            if (input[i] < output[j]) {
                break;
            }
        }

        output.insert(j, 1, input[i]);
        if (i < input.length() - 2) {
            output.insert(j+1, 1, '+');
        }

    }

    cout << output << endl;
    return 0;
}
