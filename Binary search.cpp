#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size";
    cin >> n;

    int l = 0, h = n - 1, mid;
    int arr[n];
    int key;

    cout << "Key";
    cin >> key;

    cout << "Enter Value:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

  while (l <= h) {
        mid = (l + h) / 2;

        if (arr[mid] < key) {
            l = mid + 1;
        }
    else if (arr[mid] >key) {
            h = mid - 1;
        }
    else{
        cout<<"Found"<<endl;
        break;
    }
    }


    if (l > h) {
        cout << "Not Found";
    }

    return 0;
}

