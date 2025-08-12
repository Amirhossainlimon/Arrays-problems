#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols; // Input the size of the matrix

    int arr[rows][cols]; // To store the matrix elements
     cout << "Enter the matrix elements:\n";
    // Input the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Define the boundaries
    int top = 0;             // Top boundary
    int bottom = rows - 1;   // Bottom boundary
    int left = 0;            // Left boundary
    int right = cols - 1;    // Right boundary

    // Print the matrix in spiral order
    while (top <= bottom && left <= right) {
        // 1. Print the top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // 2. Print the right column
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // 3. Print the bottom row (if rows are left)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // 4. Print the left column (if columns are left)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}

