#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    int result = 0;
    for (int i : nums) {
        result ^= i; // XOR operation
    }

    cout << result << endl;
    return 0;
}

