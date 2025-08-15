#include <iostream>
using namespace std;

void primeSieve(int n) {
    int prime[100] = {0}; // 0 means prime, 1 means not prime

    // Mark multiples as not prime
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1; // mark as not prime
            }
        }
    }

    // Print all primes
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    primeSieve(n);
    return 0;
}
