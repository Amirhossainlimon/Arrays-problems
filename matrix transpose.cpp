#include<iostream>
using namespace std;

int main() {
    int matrix[4][3];
    cout << "Enter the values of Matrix:" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "This is the Matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "This is the transpose of Matrix:" << endl;
    for (int j = 0; j < 3; j++) {        // Loop for columns
        for (int i = 0; i < 4; i++) {    // Loop for rows
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

