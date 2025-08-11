#include<iostream>
using namespace std;

int search(int arr[], int size, int target, int index = 0) {
    if (index == size)
        return -1; // Not found

    if (arr[index] == target)
        return index; // Found

    return search(arr, size, target, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = search(arr, n, target);

    if (result == -1)
        cout << "Number not found." << endl;
    else
        cout << "Number found at index: " << result << endl;

    return 0;
}

