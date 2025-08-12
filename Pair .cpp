#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    // Way 1
    pair<int, string> p1;
    p1.first = 10;
    p1.second = "Limon";

    // Way 2
    pair<int, string> p2(03, "Nijhum");

    // Way 3
    pair<int, string> p3 = make_pair(33, "Eshan");

    // Way 4
    vector<pair<int, string>> studentList;
    studentList.push_back({40, "Nur"});

    // Way 5
    auto p5 = make_pair(46, "Mysha");

    // Display
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;
    cout << "Pair 3: " << p3.first << ", " << p3.second << endl;;
    cout << "Vector Pair: " << studentList[0].first << ", " << studentList[0].second << endl;
    cout << "Auto Pair: " << p5.first << ", " << p5.second << endl;

    return 0;
}

