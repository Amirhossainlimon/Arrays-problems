#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cout << "Enter the range (1 to n): ";
    cin >> n;

    cout << "Enter the first number (a): ";
    cin >> a;

    cout << "Enter the second number (b): ";
    cin >> b;

    int count =( n/a + n/b - n/(a*b)); // Inclusion-Exclusion formula
    cout << "Total numbers divisible by "<<a<<" or "<<b<<"="<< count << endl;
    return 0;
}
