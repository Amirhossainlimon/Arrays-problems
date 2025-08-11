#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x, y;
    cout << "Enter rows: ";
    cin >> x;
    cout << "Enter columns: ";
    cin >> y;

    int matrix[x][y];

    cout << "Enter the values of the 2D array:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxColSum = INT_MIN;

    // Loop through each column
    for (int j = 0; j < y; j++) {
        int colSum = 0;
        for (int i = 0; i < x; i++) {
            colSum += matrix[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }

    cout << "Max column sum: " << maxColSum << endl;

    return 0;
}
