#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the values of the 2D array:" << endl;

    // Full matrix input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];               // main diagonal
        secondaryDiagonalSum += matrix[i][n - 1 - i];  // secondary diagonal
    }

    cout << "Main Diagonal Sum: " << mainDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << endl;

     int totalDiagonalSum = mainDiagonalSum + secondaryDiagonalSum;

    if (n % 2 == 1) {
        int mid = n / 2;
        totalDiagonalSum -= matrix[mid][mid];
    }

    cout << "Total Diagonal Sum = " << totalDiagonalSum << endl;

    return 0;
}


