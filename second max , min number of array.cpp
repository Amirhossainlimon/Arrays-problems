#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
    max1= max(max1,array[i]);
    min1= min(min1,array[i]);
    }
    for (int i = 0; i < n; i++) {
        if (array[i] > max2 && array[i] < max1){
            max2 = array[i];
            }
        if (array[i] < min2 && array[i] > min1){
                min2 = array[i];
        }
    }

    if (max2 == INT_MIN){

        cout << "Second max not found" << endl;
    }
    else{
        cout << "Second max: " << max2 << endl;
    }
    if (min2 == INT_MAX){
        cout << "Second min not found" << endl;
    }
    else{
        cout << "Second min: " << min2 << endl;
    }
    return 0;
}
