#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];       //arr[]={1,2,3,4,5};

    }

    // Generate and print all subarrays
    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            for(int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
