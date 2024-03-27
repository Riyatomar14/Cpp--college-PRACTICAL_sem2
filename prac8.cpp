/* display matrix sum , product ,transpose */
/sum of matrix

#include <iostream>
using namespace std;

int main() {
    int R, C;
    cout << "Enter the size of matrix: ";
    cin >> R >> C;

    int m1[10][10], m2[10][10], res[10][10]; // Assuming maximum size of 10x10
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m2[i][j];
        }
    }

    cout << "Sum of the matrices:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/ mutiplication of matrix

