#include <iostream>
#include <utility> // for std::swap
using namespace std;

int main() {
    int n;
    cout<<"enter size ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n - 1;

    // Use while loop and std::swap to reverse the array
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

