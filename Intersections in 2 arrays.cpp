#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 5, 6};
    int b[5] = {8, 2, 1, 5, 7};

    cout << "Common elements: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break; // break inner loop to avoid printing duplicates for a[i]
            }
        }
    }
    cout << endl;
    return 0;
}

