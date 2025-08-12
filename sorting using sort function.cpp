#include <iostream>
#include <functional>  // For greater<>
#include <algorithm>  // For sort
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
     //cout<<arr; holo arr[0] index er location not value..

    sort(arr, arr + n);  // Sort array from arr[0] to arr[n-1]

    cout<<"Small to large:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
     cout<<"large to small:"<<endl;
sort(arr, arr + n, greater<int>());
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;



    return 0;
}

