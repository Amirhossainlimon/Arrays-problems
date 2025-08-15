#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueNum = 0;
    for (int i = 0; i < n; i++) {
        uniqueNum ^= arr[i];
    }

    cout << "Unique number: " << uniqueNum << endl;

    return 0;
}
