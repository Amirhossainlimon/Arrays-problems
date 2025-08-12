#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter the size of an array:";
    cin >> n;

cout<<"Enter the elements of an array:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int pre = i - 1;

        while (pre >= 0 && arr[pre] > current) {
            arr[pre + 1] = arr[pre];
            pre--;
        }

        arr[pre + 1] = current;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

