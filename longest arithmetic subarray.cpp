#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 2; // Minimum length of AP is 2
    int pd = a[1] - a[0]; // previous difference
    int curr = 2; // current length of AP
    int j = 2;

    while (j < n) {
        if (a[j] - a[j - 1] == pd) {
            curr++;
        } else {
            pd = a[j] - a[j - 1];
            curr = 2; // reset the count
        }
        ans = max(ans, curr);
        j++;
    }

    cout << "The length of the longest arithmetic subarray is: " << ans << endl;

    return 0;
}
