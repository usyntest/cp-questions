#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int row, col, moves = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }

    moves = (3-row) < 0 ? -1 * (3 - row) : 3 - row;
    moves += (3-col) < 0 ? -1 * (3 - col) : 3 - col;

    cout << moves << endl;
    return 0;
}