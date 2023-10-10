#include <iostream>

using namespace std;

int main() {
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        int entries, temp;
        cin >> entries;
        int arr[entries];

        for (int j = 0; j < entries; j++) {
            cin >> arr[j];
        }


        for (int j = 1; j <= entries; j++) {
            if (entries == 1) {
                cout << arr[0] << " ";
                break;
            }
            if (j == entries / 2) {
                cout << arr[j - 1] << " ";
                cout << arr[entries - j] << " ";
                if (entries % 2 != 0) {
                    cout << arr[j] << " ";
                }
                break;
            }
            cout << arr[j - 1] << " ";
            cout << arr[entries - j] << " ";
        }

        cout << endl;
    }
    return 0;
}