#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key: ";
    cin >> key;

    int x=0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at position: " << i << endl;
            x++;
            break;
        }
    }

    if (x==0) {
        cout << "Not found in the array." << endl;
    }

    return 0;
}
